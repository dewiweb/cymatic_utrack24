// rea decompile_all
// name: FUN_0041dce0
// address: 0x41dce0
// body: available
// range: 0x41dce0-0x41de4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041dce0(uint param_1,undefined4 param_2)

{
  byte *_Memory;
  byte *_Memory_00;
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int in_ECX;
  int iVar8;
  int in_EDX;
  byte *pbVar9;
  int iVar10;
  
  iVar6 = (int)(param_1 - 1) / 2;
  iVar5 = in_EDX;
joined_r0x0041dd08:
  if (iVar6 <= iVar5) {
    if ((iVar5 == iVar6) && ((param_1 & 1) == 0)) {
      uVar4 = *(undefined4 *)(in_ECX + iVar5 * 4);
      *(undefined4 *)(in_ECX + iVar5 * 4) = *(undefined4 *)(in_ECX + -4 + param_1 * 4);
      *(undefined4 *)(in_ECX + -4 + param_1 * 4) = uVar4;
    }
    FUN_0041df30(in_EDX,param_2,param_1);
    return;
  }
  pbVar9 = *(byte **)(in_ECX + 4 + iVar5 * 8);
  iVar2 = iVar5 * 2 + 2;
  _Memory = pbVar9 + -8;
  if (_Memory != (byte *)&DAT_00bfe124) {
    LOCK();
    *(int *)_Memory = *(int *)_Memory + 1;
    UNLOCK();
  }
  pbVar7 = *(byte **)(in_ECX + iVar2 * 4);
  _Memory_00 = pbVar7 + -8;
  if (_Memory_00 != (byte *)&DAT_00bfe124) {
    LOCK();
    *(int *)_Memory_00 = *(int *)_Memory_00 + 1;
    UNLOCK();
  }
  iVar10 = 0;
LAB_0041dd41:
  do {
    bVar3 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    if ((char)bVar3 < '\0') {
      if ((*pbVar7 & 0xc0) == 0x80) {
        do {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar10 = iVar10 + 1;
        goto LAB_0041dd41;
      }
    }
    else if (bVar3 == 0) break;
    iVar10 = iVar10 + 1;
  } while( true );
  iVar8 = 0;
LAB_0041dd70:
  do {
    bVar3 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    if ((char)bVar3 < '\0') {
      if ((*pbVar9 & 0xc0) == 0x80) {
        do {
          pbVar7 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
        } while ((*pbVar7 & 0xc0) == 0x80);
        iVar8 = iVar8 + 1;
        goto LAB_0041dd70;
      }
    }
    else if (bVar3 == 0) break;
    iVar8 = iVar8 + 1;
  } while( true );
  if (iVar10 < iVar8) {
    iVar10 = 1;
  }
  else {
    iVar10 = (iVar10 <= iVar8) - 1;
  }
  if (_Memory_00 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)_Memory_00;
    *(int *)_Memory_00 = *(int *)_Memory_00 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(_Memory_00);
    }
  }
  if (_Memory != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar8 = *(int *)_Memory;
    *(int *)_Memory = *(int *)_Memory + -1;
    UNLOCK();
    if (iVar8 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  iVar8 = iVar5 * 2 + 1;
  if (-1 < iVar10) {
    iVar8 = iVar2;
  }
  uVar4 = *(undefined4 *)(in_ECX + iVar5 * 4);
  *(undefined4 *)(in_ECX + iVar5 * 4) = *(undefined4 *)(in_ECX + iVar8 * 4);
  *(undefined4 *)(in_ECX + iVar8 * 4) = uVar4;
  iVar5 = iVar8;
  goto joined_r0x0041dd08;
}

