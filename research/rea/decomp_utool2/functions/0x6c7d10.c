// rea decompile_all
// name: FUN_006c7d10
// address: 0x6c7d10
// body: available
// range: 0x6c7d10-0x6c7e8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c7d10(void)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  DWORD DVar5;
  int *in_ECX;
  double dVar6;
  undefined4 local_c [2];
  
  if (*(char *)((int)in_ECX + 0xdb) != '\0') {
    FUN_0063eab0();
    uVar2 = FUN_006e2bd0();
    uVar2 = uVar2 & 0xff;
    uVar1 = FUN_006cc060(1);
    FUN_006c86c0(uVar1,uVar2);
    *(undefined1 *)((int)in_ECX + 0xdb) = 0;
    return;
  }
  if (0 < in_ECX[0x2b]) {
    if ((char)in_ECX[0x37] == '\0') {
      uVar2 = FUN_006e2bd0();
      uVar2 = uVar2 & 0xff;
      uVar1 = FUN_006cc060(1);
      iVar3 = FUN_006c86c0(uVar1,uVar2);
      if (iVar3 != 2) goto LAB_006c7e74;
    }
    iVar3 = in_ECX[0x2b];
    if (-1 < in_ECX[0x2c]) {
      iVar4 = FUN_006c85d0();
      dVar6 = ((double)iVar4 + (double)(&DAT_00c24bb0)[-(iVar4 >> 0x1f)]) / 4000.0;
      if (1.0 <= dVar6) {
        dVar6 = 1.0;
      }
      iVar3 = iVar3 + (int)(dVar6 * dVar6 * (double)(in_ECX[0x2c] - iVar3));
    }
    iVar4 = 1;
    if (1 < iVar3) {
      iVar4 = iVar3;
    }
    DVar5 = timeGetTime();
    if ((DAT_00c8a644 <= DVar5) || (DVar5 < DAT_00c8a644 - 1000)) {
      DAT_00c8a644 = DVar5;
    }
    iVar3 = iVar4;
    if ((in_ECX[0x28] != 0) && (iVar4 * 2 < (int)(DVar5 - in_ECX[0x28]))) {
      iVar3 = 1;
      if (1 < iVar4 / 2) {
        iVar3 = iVar4 / 2;
      }
    }
    in_ECX[0x28] = DVar5;
    FUN_0063eb10(iVar3);
    local_c[0] = DAT_00c8a9c8;
    (**(code **)(*in_ECX + 0xc4))(local_c);
    return;
  }
LAB_006c7e74:
  if (*(char *)((int)in_ECX + 0xda) == '\0') {
    FUN_0063eab0();
  }
  return;
}

