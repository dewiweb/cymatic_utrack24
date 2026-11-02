// rea decompile_all
// name: FUN_0061fc70
// address: 0x61fc70
// body: available
// range: 0x61fc70-0x61fe18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061fc70(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *_Memory;
  bool bVar8;
  byte *local_c;
  
  bVar8 = *param_1 == 0;
  local_c = param_1;
  if (bVar8) {
    return;
  }
LAB_0061fc97:
  pbVar2 = local_c;
  iVar3 = FUN_00443260();
  while (iVar3 != 0) {
    if (iVar3 == 10) goto LAB_0061fcd0;
    if (iVar3 == 0xd) {
      iVar3 = FUN_00426f70();
      if (iVar3 != 10) goto LAB_0061fcd0;
      bVar1 = *local_c;
      local_c = local_c + 1;
      if (-1 < (char)bVar1) goto LAB_0061fcd0;
      uVar6 = 0x40;
      if ((bVar1 & 0x40) == 0) goto LAB_0061fcd0;
      goto LAB_0061fd38;
    }
    iVar3 = FUN_00443260();
  }
  bVar8 = true;
  goto LAB_0061fcd0;
  while( true ) {
    local_c = local_c + 1;
    uVar6 = uVar6 >> 1;
    if ((uVar6 & (int)(char)bVar1) == 0) break;
LAB_0061fd38:
    if (uVar6 < 9) break;
  }
LAB_0061fcd0:
  if ((pbVar2 == (byte *)0x0) || (*pbVar2 == 0)) {
    puVar7 = (undefined4 *)&DAT_00bfe12c;
  }
  else {
    puVar4 = (undefined4 *)FUN_004bfe22(0xf);
    puVar4[1] = 4;
    puVar7 = puVar4 + 2;
    *puVar4 = 0;
    FUN_004c2c30(puVar7,pbVar2,0);
    *(undefined1 *)puVar7 = 0;
  }
  iVar3 = in_ECX[2];
  iVar5 = iVar3 + 1;
  if (in_ECX[1] < iVar5) {
    if (iVar5 < 0) {
      iVar5 = iVar3 + 2;
    }
    uVar6 = iVar3 + 9 + (iVar5 >> 1) & 0xfffffff8;
    if (in_ECX[1] != uVar6) {
      if ((int)uVar6 < 1) {
        FID_conflict__free((void *)*in_ECX);
        *in_ECX = 0;
      }
      else if (*in_ECX == 0) {
        iVar3 = FUN_004c554b();
        *in_ECX = iVar3;
      }
      else {
        iVar3 = FUN_004c553b(*in_ECX,uVar6 * 4);
        *in_ECX = iVar3;
      }
      in_ECX[1] = uVar6;
    }
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  puVar4 = (undefined4 *)(*in_ECX + iVar3 * 4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = puVar7;
    puVar7 = (undefined4 *)&DAT_00bfe12c;
  }
  _Memory = puVar7 + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar3 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (bVar8) {
    return;
  }
  goto LAB_0061fc97;
}

