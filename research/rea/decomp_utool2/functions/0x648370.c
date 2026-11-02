// rea decompile_all
// name: FUN_00648370
// address: 0x648370
// body: available
// range: 0x648370-0x64843d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00648370(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int in_ECX;
  byte *in_EDX;
  
  uVar4 = param_1;
  if ((param_1 & 2) == 0) {
    bVar5 = in_EDX[3];
    if ((bVar5 == 0) || (*(byte *)(in_ECX + 0x10d) < bVar5)) {
      FUN_006563b0();
      return;
    }
    param_1 = CONCAT31(param_1._1_3_,bVar5);
    iVar6 = 1;
LAB_006483f0:
    if ((uVar4 & 4) != 0) {
      bVar5 = in_EDX[4];
      if ((bVar5 == 0) || (*(byte *)(in_ECX + 0x10d) < bVar5)) {
        FUN_006563b0();
        return;
      }
      *(byte *)((int)&param_1 + iVar6) = bVar5;
      iVar6 = iVar6 + 1;
    }
    FUN_00649680(&param_1,iVar6);
    return;
  }
  bVar5 = 8;
  if (param_1 != 3) {
    bVar5 = *(byte *)(in_ECX + 0x10d);
  }
  bVar1 = *in_EDX;
  if ((bVar1 != 0) && (bVar1 <= bVar5)) {
    bVar2 = in_EDX[1];
    if ((bVar2 != 0) && (bVar2 <= bVar5)) {
      bVar3 = in_EDX[2];
      if ((bVar3 != 0) && (bVar3 <= bVar5)) {
        param_1._0_3_ = CONCAT12(bVar3,CONCAT11(bVar2,bVar1));
        iVar6 = 3;
        goto LAB_006483f0;
      }
    }
  }
  FUN_006563b0();
  return;
}

