Package: abseil:arm64-osx@20240722.0

**Host Environment**

- Host: arm64-osx
- Compiler: AppleClang 15.0.0.15000309
-    vcpkg-tool version: 2024-12-09-1005b78fa1bf1dde1a20c2734cba4ea61ca94d9a
    vcpkg-scripts version: 80d54ff62 2024-12-23 (3 weeks ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
Downloading abseil-abseil-cpp-20240722.0.tar.gz
Successfully downloaded abseil-abseil-cpp-20240722.0.tar.gz.
-- Extracting source /Users/lin/vcpkg/downloads/abseil-abseil-cpp-20240722.0.tar.gz
-- Using source at /Users/lin/vcpkg/buildtrees/abseil/src/20240722.0-6b5719c147.clean
-- Configuring arm64-osx-dbg
-- Configuring arm64-osx-rel
-- Building arm64-osx-dbg
-- Building arm64-osx-rel
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_absl_check.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_absl_log.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_absl_vlog_is_on.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_algorithm.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_algorithm_container.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_any.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_any_invocable.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_atomic_hook.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bad_any_cast.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bad_any_cast_impl.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bad_optional_access.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bad_variant_access.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_base.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_base_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bind_front.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_bounded_utf8_length_sequence.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_btree.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_charset.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_check.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_city.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_civil_time.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cleanup.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cleanup_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_common_policy_traits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_compare.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_compressed_tuple.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_config.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_container_common.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_container_memory.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cord.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cord_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_functions.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_handle.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_info.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_sample_token.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_statistics.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_update_scope.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_cordz_update_tracker.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_core_headers.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_crc32c.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_crc_cord_state.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_crc_cpu_detect.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_crc_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_debugging.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_debugging_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_decode_rust_punycode.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_demangle_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_demangle_rust.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_die_if_null.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_dynamic_annotations.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_endian.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_errno_saver.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_examine_stack.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_exponential_biased.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_failure_signal_handler.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_fast_type_id.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_fixed_array.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_commandlineflag.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_commandlineflag_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_config.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_marshalling.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_parse.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_path_util.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_private_handle_accessor.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_program_name.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_reflection.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_usage.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flags_usage_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flat_hash_map.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_flat_hash_set.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_function_ref.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_graphcycles_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_has_ostream_operator.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hash.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hash_container_defaults.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hash_function_defaults.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hash_policy_traits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hashtable_debug.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hashtable_debug_hooks.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_hashtablez_sampler.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_if_constexpr.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_inlined_vector.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_inlined_vector_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_int128.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_kernel_timeout_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_layout.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_leak_check.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_entry.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_flags.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_globals.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_initialize.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_append_truncated.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_check_impl.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_check_op.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_conditions.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_config.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_flags.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_fnmatch.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_format.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_globals.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_log_impl.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_log_sink_set.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_message.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_nullguard.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_nullstream.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_proto.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_strip.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_structured.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_internal_voidify.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_severity.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_sink.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_sink_registry.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_streamer.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_log_structured.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_low_level_hash.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_malloc_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_memory.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_meta.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_no_destructor.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_node_hash_map.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_node_hash_set.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_node_slot_policy.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_non_temporal_arm_intrinsics.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_non_temporal_memcpy.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_nullability.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_numeric.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_numeric_representation.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_optional.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_overload.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_periodic_sampler.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_poison.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_prefetch.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_pretty_function.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_bit_gen_ref.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_distributions.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_distribution_caller.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_distribution_test_util.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_fast_uniform_bits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_fastmath.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_generate_real.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_iostream_state_saver.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_mock_helpers.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_nonsecure_base.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_pcg_engine.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_platform.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_pool_urbg.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_randen.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_randen_engine.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_randen_hwaes.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_randen_hwaes_impl.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_randen_slow.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_salted_seed_seq.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_seed_material.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_traits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_uniform_helper.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_internal_wide_multiply.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_random.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_seed_gen_exception.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_random_seed_sequences.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_raw_hash_map.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_raw_hash_set.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_raw_logging_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_sample_recorder.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_scoped_set_env.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_span.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_spinlock_wait.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_stacktrace.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_status.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_statusor.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_str_format.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_str_format_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_strerror.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_string_view.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_strings.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_strings_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_symbolize.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_synchronization.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_throw_delegate.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_time.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_time_zone.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_type_traits.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_utf8_for_code_point.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_utility.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_variant.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_vlog_config_internal.pc
-- Fixing pkgconfig file: /Users/lin/vcpkg/packages/abseil_arm64-osx/lib/pkgconfig/absl_vlog_is_on.pc
CMake Error at scripts/cmake/vcpkg_find_acquire_program.cmake:166 (message):
  Could not find pkg-config.  Please install it via your package manager:

      brew install pkg-config
Call Stack (most recent call first):
  scripts/cmake/vcpkg_fixup_pkgconfig.cmake:193 (vcpkg_find_acquire_program)
  ports/abseil/portfile.cmake:38 (vcpkg_fixup_pkgconfig)
  scripts/ports.cmake:196 (include)



```

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "name": "grassland",
  "version-string": "0.1.0",
  "description": "Grassland",
  "dependencies": [
    "glfw3",
    "freetype",
    "glm",
    "stb",
    "spdlog",
    "imgui",
    "abseil",
    "gtest",
    "vulkan-memory-allocator",
    "glslang",
    {
      "name": "d3dx12",
      "platform": "windows"
    },
    "eigen3"
  ]
}

```
</details>
