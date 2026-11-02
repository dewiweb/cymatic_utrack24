// rea decompile_all
// name: FUN_005cb540
// address: 0x5cb540
// body: available
// range: 0x5cb540-0x5cb660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb540(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  void *local_14;
  
  cVar1 = FUN_005cb4b0();
  if (param_2 != cVar1) {
    if (param_2 == '\0') {
      uVar4 = *(int *)(in_ECX + 0x1a8) - 1;
      if (-1 < (int)uVar4) {
        do {
          if (uVar4 < *(uint *)(in_ECX + 0x1a8)) {
            piVar3 = *(int **)(*(int *)(in_ECX + 0x1a0) + uVar4 * 4);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if ((*piVar3 == *param_1) || (iVar2 = FUN_00448730(*piVar3), iVar2 == 0)) {
            FUN_00432fa0(uVar4);
          }
          uVar4 = uVar4 - 1;
        } while (-1 < (int)uVar4);
      }
    }
    else {
      FUN_005c8460();
      iVar2 = FUN_0062c730(*param_1,0);
      FUN_0040f7f0();
      FID_conflict__free(local_14);
      if ((-1 < iVar2) && (iVar2 = FUN_005c8210(), iVar2 != 0)) {
        FUN_004111b0();
        FUN_0042e370();
      }
    }
    FUN_005cbd40();
    if (0 < *(int *)(in_ECX + 0x18)) {
      piVar3 = (int *)(*(int *)(in_ECX + 8) + 0xc);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 1;
        iVar2 = 0;
      }
      UNLOCK();
      if ((iVar2 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
        LOCK();
        *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
        UNLOCK();
      }
    }
  }
  return;
}

