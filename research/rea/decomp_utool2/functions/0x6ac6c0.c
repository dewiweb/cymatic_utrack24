// rea decompile_all
// name: FUN_006ac6c0
// address: 0x6ac6c0
// body: available
// range: 0x6ac6c0-0x6ac833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac6c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 **ppuStack_20;
  int iStack_1c;
  undefined4 *local_8;
  
  iStack_1c = *(int *)(in_ECX[0x1c] + 0xa8);
  ppuStack_20 = &local_8;
  uStack_24 = 0x6ac6e0;
  piVar2 = (int *)FUN_0040f020();
  if (*piVar2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(*piVar2 + 8);
  }
  if (local_8 != (undefined4 *)0x0) {
    LOCK();
    piVar2 = local_8 + 1;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      iStack_1c = 1;
      ppuStack_20 = (undefined4 **)0x6ac707;
      (**(code **)*local_8)();
    }
  }
  if (in_ECX[0x20] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(in_ECX[0x20] + 8);
  }
  if (iVar4 != iVar3) {
    if ((in_ECX[0x20] != 0) && (*(int *)(in_ECX[0x20] + 8) != 0)) {
      if (in_ECX[0x20] == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(in_ECX[0x20] + 8);
      }
      iStack_1c = 0;
      ppuStack_20 = (undefined4 **)0x6ac749;
      (**(code **)(*piVar2 + 0x28))();
      if (in_ECX[0x20] == 0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = *(int *)(in_ECX[0x20] + 8);
      }
      ppuStack_20 = (undefined4 **)0x6ac762;
      FUN_006cf2a0();
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      ppuStack_20 = (undefined4 **)0x6ac76f;
      iStack_1c = iVar4;
      iVar4 = FUN_0040de70();
    }
    if (in_ECX[0x20] != iVar4) {
      if (iVar4 != 0) {
        LOCK();
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
        UNLOCK();
      }
      puVar1 = (undefined4 *)in_ECX[0x20];
      in_ECX[0x20] = iVar4;
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = puVar1 + 1;
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          iStack_1c = 1;
          ppuStack_20 = (undefined4 **)0x6ac7a1;
          (**(code **)*puVar1)();
        }
      }
    }
    if ((in_ECX[0x20] != 0) && (*(int *)(in_ECX[0x20] + 8) != 0)) {
      if ((in_ECX[0x20] != 0) &&
         (ppuStack_20 = *(undefined4 ***)(in_ECX[0x20] + 8), ppuStack_20 != (undefined4 **)0x0)) {
        iStack_1c = 0xffffffff;
        uStack_24 = 0x6ac7cd;
        FUN_006e5050();
      }
      if (in_ECX[0x20] == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)(in_ECX[0x20] + 8);
      }
      iStack_1c = 1;
      ppuStack_20 = (undefined4 **)0x6ac7e5;
      (**(code **)(*piVar2 + 0x28))();
      iStack_1c = 1;
      ppuStack_20 = (undefined4 **)0x6ac7fd;
      FUN_006e9910();
    }
    FUN_006e6400(auStack_28);
    FUN_006ce9f0(1);
  }
  iStack_1c = 0x6ac81b;
  (**(code **)(*in_ECX + 0x84))();
  iStack_1c = param_2;
  ppuStack_20 = (undefined4 **)param_1;
  uStack_24 = 0x6ac82b;
  (**(code **)(*in_ECX + 0xb0))();
  return;
}

