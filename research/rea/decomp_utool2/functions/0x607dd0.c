// rea decompile_all
// name: FUN_00607dd0
// address: 0x607dd0
// body: available
// range: 0x607dd0-0x607e76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607dd0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c289;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0xa8)) {
    do {
      piVar3 = (int *)FUN_004179c0(&local_14,iVar4);
      local_8._0_1_ = 1;
      (**(code **)(**(int **)(*piVar3 + 0x18) + 0x38))(uVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      if (local_14 != (undefined4 *)0x0) {
        LOCK();
        piVar3 = local_14 + 1;
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          (**(code **)*local_14)(1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0xa8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  ExceptionList = local_10;
  return;
}

