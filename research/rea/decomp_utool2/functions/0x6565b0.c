// rea decompile_all
// name: FUN_006565b0
// address: 0x6565b0
// body: available
// range: 0x6565b0-0x656841 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006565b0(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int in_EDX;
  uint uVar5;
  float10 fVar6;
  
  if ((*(int *)(in_ECX + 0x144) != 0) || (*(int *)(in_ECX + 0x148) != 0)) {
    FUN_006563b0();
    FUN_00656850();
  }
  if (in_EDX < 9) {
    if (0 < *(int *)(in_ECX + 0x140)) {
      FUN_00657060();
    }
    FUN_006569d0();
    if ((*(uint *)(in_ECX + 0x30) & 0x600080) != 0) {
      FUN_006f9790(10000000000.0 / (double)*(int *)(in_ECX + 0x284) + 0.5);
      FUN_006569d0();
      if (0 < *(int *)(in_ECX + 0x140)) {
        FUN_00657170();
      }
      FUN_006569d0();
      return;
    }
  }
  else {
    if ((*(byte *)(in_ECX + 0x10b) & 2) == 0) {
      bVar1 = *(byte *)(in_ECX + 0x15f);
    }
    else {
      bVar1 = *(byte *)(in_ECX + 0x15c);
      if (*(byte *)(in_ECX + 0x15c) < *(byte *)(in_ECX + 0x15d)) {
        bVar1 = *(byte *)(in_ECX + 0x15d);
      }
      if (bVar1 < *(byte *)(in_ECX + 0x15e)) {
        bVar1 = *(byte *)(in_ECX + 0x15e);
      }
    }
    if ((byte)(bVar1 - 1) < 0xf) {
      bVar1 = 0x10 - bVar1;
    }
    else {
      bVar1 = 0;
    }
    uVar5 = *(uint *)(in_ECX + 0x30) & 0x4000400;
    if ((uVar5 == 0) || (4 < bVar1)) {
      uVar4 = (uint)bVar1;
      if (8 < bVar1) {
        uVar4 = 8;
      }
    }
    else {
      uVar4 = 5;
    }
    *(uint *)(in_ECX + 0x13c) = uVar4;
    if (uVar5 == 0) {
      if (*(int *)(in_ECX + 0x140) < 1) {
        uVar2 = 100000;
      }
      else {
        uVar2 = FUN_00657060();
      }
      FUN_00656cd0(uVar4,uVar2);
    }
    else if (*(int *)(in_ECX + 0x140) < 1) {
      FUN_00656ae0(uVar4,100000);
    }
    else {
      uVar2 = FUN_006570e0();
      FUN_00656ae0(uVar4,uVar2);
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x600080) != 0) {
      fVar6 = (float10)FUN_006f9790(10000000000.0 / (double)*(int *)(in_ECX + 0x284) + 0.5);
      if ((2147483647.0 < (double)fVar6) || ((double)fVar6 < -2147483648.0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = (int)fVar6;
      }
      FUN_00656cd0(uVar4,iVar3);
      if (*(int *)(in_ECX + 0x140) < 1) {
        uVar2 = *(undefined4 *)(in_ECX + 0x284);
      }
      else {
        uVar2 = FUN_00657170();
      }
      FUN_00656cd0(uVar4,uVar2);
    }
  }
  return;
}

