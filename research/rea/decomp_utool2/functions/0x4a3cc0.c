// rea decompile_all
// name: FUN_004a3cc0
// address: 0x4a3cc0
// body: available
// range: 0x4a3cc0-0x4a3e16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a3cc0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint in_ECX;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar5 = in_ECX;
  if ((param_2 & 1) != 0) {
    iVar4 = *(int *)(in_ECX + 0x7c);
    uVar5 = 0;
    if ((*(int *)(iVar4 + 0x9c) != 0) && (iVar2 = FUN_0068fb00(0), uVar5 = extraout_ECX, iVar2 != 0)
       ) {
      iVar2 = *(int *)(iVar4 + 0x9c);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(byte *)(iVar2 + 0x30) & 1;
        iVar2 = *(int *)(iVar2 + 0x14);
        while (-1 < iVar2 + -1) {
          uVar7 = FUN_0068fb80(0xfffffffe);
          uVar5 = uVar5 + (int)uVar7;
          iVar2 = (int)((ulonglong)uVar7 >> 0x20);
        }
      }
      if (*(int *)(iVar4 + 0x9c) != 0) {
        FUN_0068fb00(uVar5 - 1);
      }
      iVar3 = FUN_0068fa60();
      iVar2 = FUN_0068fa60();
      iVar4 = iVar3;
      if (iVar2 < iVar3) {
        iVar4 = iVar2;
        iVar2 = iVar3;
      }
      iVar3 = FUN_0068fa60();
      if (iVar3 < iVar2) {
        iVar2 = iVar4;
      }
      iVar4 = iVar3;
      iVar6 = iVar2;
      if ((iVar3 <= iVar2) || (iVar4 = iVar2, iVar6 = iVar3, iVar2 <= iVar3)) {
        do {
          iVar2 = *(int *)(*(int *)(in_ECX + 0x7c) + 0x9c);
          iVar3 = iVar4 + 1;
          if (*(char *)(*(int *)(in_ECX + 0x7c) + 0xae) != '\0') {
            iVar3 = iVar4;
          }
          if ((iVar2 != 0) && (-1 < iVar3)) {
            FUN_0068fc40(iVar3);
            iVar2 = extraout_ECX_00;
          }
          FUN_006dff00(1,0,iVar2);
          iVar4 = iVar4 + 1;
        } while (iVar4 <= iVar6);
      }
      return;
    }
  }
  bVar1 = (byte)(param_2 >> 1) & 1;
  if (((param_2 >> 1 & 1) != 0) && ((*(byte *)(param_1 + 0x30) & 1) != 0)) {
    FUN_006dff00(uVar5 & 0xffffff00,bVar1 ^ 1,uVar5 & 0xffffff00);
    return;
  }
  FUN_006dff00(1,bVar1 ^ 1,1);
  return;
}

