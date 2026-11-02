// rea decompile_all
// name: FUN_006e89c0
// address: 0x6e89c0
// body: available
// range: 0x6e89c0-0x6e8af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e89c0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
    piVar2 = in_ECX + 0x1f;
    if (in_ECX == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    FUN_00415ff0(piVar2);
  }
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0040de70(param_1);
  }
  if (in_ECX[0x2c] != iVar3) {
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    puVar1 = (undefined4 *)in_ECX[0x2c];
    in_ECX[0x2c] = iVar3;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar1 + 1;
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  *(undefined1 *)((int)in_ECX + 0xcf) = 1;
  if ((in_ECX[0x2c] != 0) && (*(int *)(in_ECX[0x2c] + 8) != 0)) {
    (**(code **)(*in_ECX + 0x28))(*(byte *)(param_1 + 0x68) >> 1 & 1);
    piVar2 = in_ECX + 0x1f;
    if (piVar2 != (int *)0x0) {
      FUN_004097d0(piVar2);
    }
    if (in_ECX[0x2c] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(in_ECX[0x2c] + 8);
    }
    if (*(code **)(*piVar2 + 0x14) == FUN_006e20d0) {
      if (*(int *)(iVar3 + 0xc) != 0) {
        FUN_006e5050(in_ECX,0xffffffff);
      }
    }
    else {
      (**(code **)(*piVar2 + 0x14))(iVar3);
    }
    if (in_ECX[0x2c] != 0) {
      (**(code **)(*piVar2 + 4))(*(undefined4 *)(in_ECX[0x2c] + 8),1,1);
      return;
    }
    (**(code **)(*piVar2 + 4))(0,1,1);
  }
  return;
}

