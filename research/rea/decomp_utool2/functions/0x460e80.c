// rea decompile_all
// name: FUN_00460e80
// address: 0x460e80
// body: available
// range: 0x460e80-0x46100e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460e80(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *in_ECX;
  uint uVar6;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00700ac0;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = in_ECX[8] - 1;
  *in_ECX = juce::ValueTree::SharedObject::vftable;
  if (-1 < (int)uVar6) {
    do {
      puVar3 = *(undefined4 **)(uVar6 * 4 + in_ECX[6]);
      if (puVar3 != (undefined4 *)0x0) {
        LOCK();
        puVar3[1] = puVar3[1] + 1;
        UNLOCK();
      }
      puVar3[0xc] = 0;
      if (uVar6 < (uint)in_ECX[8]) {
        piVar7 = (int *)(in_ECX[6] + uVar6 * 4);
        puVar4 = (undefined4 *)*piVar7;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar4 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*puVar4)(1,uVar5);
          }
        }
        in_ECX[8] = in_ECX[8] + -1;
        if (0 < (int)(in_ECX[8] - uVar6)) {
          FUN_004c1df0(piVar7,piVar7 + 1,(in_ECX[8] - uVar6) * 4);
        }
        iVar2 = in_ECX[8];
        if ((iVar2 * 2 < (int)in_ECX[7]) && (iVar2 < (int)in_ECX[7])) {
          FUN_00409cf0(iVar2);
        }
      }
      FUN_00461340();
      LOCK();
      piVar7 = puVar3 + 1;
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  FID_conflict__free((void *)in_ECX[9]);
  iVar2 = in_ECX[8];
  while (0 < iVar2) {
    iVar2 = in_ECX[8];
    in_ECX[8] = iVar2 + -1;
    puVar3 = *(undefined4 **)(in_ECX[6] + (iVar2 + -1) * 4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      piVar7 = puVar3 + 1;
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
    iVar2 = in_ECX[8];
  }
  FID_conflict__free((void *)in_ECX[6]);
  FUN_0045a4f0();
  FID_conflict__free((void *)in_ECX[3]);
  piVar7 = (int *)(in_ECX[2] + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar7);
    }
  }
  *in_ECX = juce::ReferenceCountedObject::vftable;
  ExceptionList = local_10;
  return;
}

