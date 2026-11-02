// rea decompile_all
// name: FUN_0008c488
// address: 0x8c488
// body: available
// range: 0x8c488-0x8c537 inclusive
// range: 0x8c63c-0x8c6e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0008c488(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  if (param_3 == 0) {
    FUN_00002898(s_TRACE__uTrack24SyncCL__OnCHAI_No_0008c538);
    *(undefined1 *)s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574._0_4_ = 1;
  }
  else if (param_3 == 1) {
    FUN_00002898(s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574 + 4);
    *(undefined1 *)s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574._0_4_ = 0;
    *(undefined1 *)s__7__TRACE__uTrack24SyncCL__OnCHA_0008c5b8._0_4_ = 0;
  }
  else if (param_3 == 4) {
    FUN_00002898(s_TRACE__uTrack24SyncCL__OnCHAI_No_0008c5fc);
    *(undefined1 *)s__7__TRACE__uTrack24SyncCL__OnCHA_0008c5b8._0_4_ = 1;
  }
  else if (param_3 == 5) {
    FUN_00002898(s__7__TRACE__uTrack24SyncCL__OnCHA_0008c5b8 + 4);
    *(undefined1 *)s__7__TRACE__uTrack24SyncCL__OnCHA_0008c5b8._0_4_ = 0;
  }
  if ((*(char *)s__7__TRACE__uTrack24SyncCL__OnCHA_0008c5b8._0_4_ != '\0') &&
     (*(char *)(param_1 + 0x82) != *(char *)s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574._0_4_)) {
    *(undefined1 *)(param_1 + 0x82) =
         *(undefined1 *)s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574._0_4_;
    FUN_00002898(DAT_0008c6e4);
    local_28 = FUN_002341f4(param_1 + 0x84);
    while( true ) {
      local_24 = FUN_002341cc(param_1 + 0x84);
      local_20 = local_24;
      iVar2 = FUN_0022484c(&local_28,&local_20);
      if (iVar2 == 0) break;
      puVar1 = (undefined4 *)FUN_0022c26c(&local_28);
      (**(code **)(*(int *)*puVar1 + 8))
                ((int *)*puVar1,*(undefined1 *)s_<7__TRACE:_uTrack24SyncCL::OnCHA_0008c574._0_4_);
      FUN_0020930c(&local_28);
    }
  }
  return;
}

