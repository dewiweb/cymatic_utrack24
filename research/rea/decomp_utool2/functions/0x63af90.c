// rea decompile_all
// name: FUN_0063af90
// address: 0x63af90
// body: available
// range: 0x63af90-0x63b064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063af90(char param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f3fa;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar2 = in_ECX[6];
  if (0 < (int)uVar2) {
    if (param_1 == '\0') {
      LOCK();
      iVar5 = *(int *)(in_ECX[3] + 0xc);
      if (iVar5 == 0) {
        *(int *)(in_ECX[3] + 0xc) = 1;
        iVar5 = 0;
      }
      UNLOCK();
      if ((iVar5 == 0) && (cVar3 = FUN_0063e270(uVar4), cVar3 == '\0')) {
        LOCK();
        *(undefined4 *)(in_ECX[3] + 0xc) = 0;
        UNLOCK();
      }
    }
    else {
      piVar1 = in_ECX + 1;
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      local_8 = 0;
      LOCK();
      *(undefined4 *)(in_ECX[3] + 0xc) = 0;
      UNLOCK();
      while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
        if ((uVar2 < (uint)in_ECX[6]) && (*(int *)(in_ECX[4] + uVar2 * 4) != 0)) {
          FUN_0063ac10();
        }
      }
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*in_ECX)(1);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

