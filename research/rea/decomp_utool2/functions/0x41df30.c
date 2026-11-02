// rea decompile_all
// name: FUN_0041df30
// address: 0x41df30
// body: available
// range: 0x41df30-0x41e06d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041df30(int param_1,undefined4 *param_2)

{
  byte *_Memory;
  byte *_Memory_00;
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  int in_ECX;
  int iVar7;
  int in_EDX;
  byte *pbVar8;
  int iVar9;
  
  while (param_1 < in_EDX) {
    iVar5 = (in_EDX + -1) / 2;
    pbVar8 = (byte *)*param_2;
    _Memory = pbVar8 + -8;
    if (_Memory != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)_Memory = *(int *)_Memory + 1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)(in_ECX + iVar5 * 4);
    pbVar6 = (byte *)*puVar2;
    _Memory_00 = pbVar6 + -8;
    if (_Memory_00 != (byte *)&DAT_00bfe124) {
      LOCK();
      *(int *)_Memory_00 = *(int *)_Memory_00 + 1;
      UNLOCK();
    }
    iVar9 = 0;
    while( true ) {
      while( true ) {
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if (-1 < (char)bVar3) break;
        if ((*pbVar6 & 0xc0) != 0x80) goto LAB_0041dfaa;
        do {
          pbVar1 = pbVar6 + 1;
          pbVar6 = pbVar6 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar9 = iVar9 + 1;
      }
      if (bVar3 == 0) break;
LAB_0041dfaa:
      iVar9 = iVar9 + 1;
    }
    iVar7 = 0;
    while( true ) {
      while( true ) {
        bVar3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        if (-1 < (char)bVar3) break;
        if ((*pbVar8 & 0xc0) != 0x80) goto LAB_0041dfd1;
        do {
          pbVar6 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
        } while ((*pbVar6 & 0xc0) == 0x80);
        iVar7 = iVar7 + 1;
      }
      if (bVar3 == 0) break;
LAB_0041dfd1:
      iVar7 = iVar7 + 1;
    }
    if (iVar9 < iVar7) {
      iVar9 = 1;
    }
    else {
      iVar9 = (iVar9 <= iVar7) - 1;
    }
    if (_Memory_00 != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar7 = *(int *)_Memory_00;
      *(int *)_Memory_00 = *(int *)_Memory_00 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory_00);
      }
    }
    if (_Memory != (byte *)&DAT_00bfe124) {
      LOCK();
      iVar7 = *(int *)_Memory;
      *(int *)_Memory = *(int *)_Memory + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    if (-1 < iVar9) break;
    uVar4 = *(undefined4 *)(in_ECX + in_EDX * 4);
    *(undefined4 *)(in_ECX + in_EDX * 4) = *puVar2;
    *puVar2 = uVar4;
    in_EDX = iVar5;
  }
  uVar4 = *(undefined4 *)(in_ECX + in_EDX * 4);
  *(undefined4 *)(in_ECX + in_EDX * 4) = *param_2;
  *param_2 = uVar4;
  return;
}

