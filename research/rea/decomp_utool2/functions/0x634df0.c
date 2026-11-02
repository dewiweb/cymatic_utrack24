// rea decompile_all
// name: FUN_00634df0
// address: 0x634df0
// body: available
// range: 0x634df0-0x634eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00634df0(undefined1 *param_1,undefined4 param_2,undefined1 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 *local_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 local_4c [16];
  char *local_3c;
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071eaf1;
  local_10 = ExceptionList;
  uStack_5c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_60 = 0;
  local_64 = param_1;
  FUN_0062a4d0();
  uStack_60 = 0x4000;
  local_64 = local_18;
  local_8 = 0;
  FUN_0062aec0();
  local_8._0_1_ = 1;
  if (*local_3c == '\0') {
    uStack_60 = param_4;
    local_64 = param_3;
    FUN_00629bb0(local_4c,param_2,0,&local_64);
    uStack_60 = 0x634e73;
    FUN_006273b0();
    if (*local_3c == '\0') {
      local_8._0_1_ = 0;
      uStack_60 = 0x634e87;
      FUN_0062ade0();
      uStack_60 = 0x634e8f;
      uVar1 = FUN_0062a3d0();
      goto LAB_00634e9d;
    }
  }
  uStack_60 = 0x634e9b;
  FUN_0062ade0();
  uVar1 = 0;
LAB_00634e9d:
  uStack_60 = 0x634ea5;
  FUN_0062a430();
  ExceptionList = local_10;
  return uVar1;
}

