// rea decompile_all
// name: FUN_006c65e0
// address: 0x6c65e0
// body: available
// range: 0x6c65e0-0x6c668e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006c65e0(undefined4 *param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  float in_XMM0_Da;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00725e1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = FUN_006e9580(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar3 = param_1;
  pcVar2 = *(code **)(*(int *)(iVar4 + 4) + 0xc);
  if (pcVar2 == FUN_006deb10) {
    FUN_006dede0(&param_1,in_ECX,param_1);
    local_8 = 0;
    FUN_006831f0(in_ECX + 0x88);
    FUN_004363b0();
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*param_1)(1);
      }
    }
    ExceptionList = local_10;
    return (int)puVar3 + (int)in_XMM0_Da;
  }
  iVar4 = (*pcVar2)();
  ExceptionList = local_10;
  return iVar4;
}

