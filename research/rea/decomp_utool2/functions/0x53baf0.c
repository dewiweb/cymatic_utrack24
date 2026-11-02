// rea decompile_all
// name: FUN_0053baf0
// address: 0x53baf0
// body: available
// range: 0x53baf0-0x53bc17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053baf0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  int *piStack_34;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070dfb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x24) < param_3) {
    *(int *)(in_ECX + 0x24) = param_3;
  }
  uVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x5c)) {
    bVar4 = *(int *)(in_ECX + 0x5c) != 0;
    do {
      if (bVar4) {
        if (*(int *)(*(int *)(in_ECX + 0x54) + uVar3 * 4) != 0) {
          if (uVar3 < *(uint *)(in_ECX + 0x5c)) {
            piStack_34 = *(int **)(*(int *)(in_ECX + 0x54) + uVar3 * 4);
          }
          else {
            piStack_34 = (int *)0x0;
          }
          FUN_00411300(&piStack_34);
          FUN_00637730();
          piStack_34 = (int *)0x53bb7c;
          FUN_006377c0();
          local_8 = 0;
          piStack_34 = &local_14;
          FUN_00635a10();
          piStack_34 = (int *)0x53bbab;
          FUN_0053b0c0();
          piVar2 = (int *)(local_14 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              piStack_34 = (int *)0x53bbcc;
              FID_conflict__free(piVar2);
            }
          }
          local_8 = 0xffffffff;
          piVar2 = (int *)(local_18 + -8);
          if (piVar2 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              piStack_34 = (int *)0x53bbf7;
              FID_conflict__free(piVar2);
            }
          }
        }
      }
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(in_ECX + 0x5c);
    } while ((int)uVar3 < (int)*(uint *)(in_ECX + 0x5c));
  }
  ExceptionList = local_10;
  return;
}

