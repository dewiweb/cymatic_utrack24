// rea decompile_all
// name: FUN_0063c3a0
// address: 0x63c3a0
// body: available
// range: 0x63c3a0-0x63c44d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


LRESULT FUN_0063c3a0(HWND param_1,UINT param_2,WPARAM param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  LRESULT LVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071f5d5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == DAT_00c8a650) {
    if (param_2 == 0x47b) {
      if (param_4 != (int *)0x0) {
        (**(code **)(*param_4 + 4))();
        LOCK();
        piVar1 = param_4 + 1;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*param_4)(1);
        }
      }
      ExceptionList = local_10;
      return 0;
    }
    if (param_2 == 0x4a) {
      FUN_0063c450(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      ExceptionList = local_10;
      return 0;
    }
  }
  LVar3 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
  ExceptionList = local_10;
  return LVar3;
}

