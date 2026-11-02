// rea decompile_all
// name: FUN_006379a0
// address: 0x6379a0
// body: available
// range: 0x6379a0-0x637a80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006379a0(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 *in_ECX;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = 0;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  if (param_3 <= iVar6) {
LAB_006379c0:
    *param_1 = &DAT_00bfe12c;
    return param_1;
  }
  pbVar5 = (byte *)*in_ECX;
  iVar8 = 0;
  pbVar3 = pbVar5;
  pbVar4 = pbVar5;
  if (0 < iVar6) {
    do {
      bVar1 = *pbVar3;
      if (bVar1 == 0) goto LAB_006379c0;
      iVar8 = iVar8 + 1;
      pbVar3 = pbVar3 + 1;
      if ((char)bVar1 < '\0') {
        uVar2 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar2 < 9) break;
            uVar2 = uVar2 >> 1;
            pbVar3 = pbVar3 + 1;
          } while ((uVar2 & (int)(char)bVar1) != 0);
        }
      }
      pbVar4 = pbVar3;
    } while (iVar8 < iVar6);
  }
  do {
    if (param_3 <= iVar8) {
LAB_00637a41:
      FUN_0062cd70(pbVar4,pbVar3);
      return param_1;
    }
    bVar1 = *pbVar3;
    if (bVar1 == 0) {
      if (iVar6 == 0) {
        *param_1 = pbVar5;
        pbVar5 = pbVar5 + -8;
        if (pbVar5 == (byte *)&DAT_00bfe124) {
          return param_1;
        }
        LOCK();
        *(int *)pbVar5 = *(int *)pbVar5 + 1;
        UNLOCK();
        return param_1;
      }
      goto LAB_00637a41;
    }
    iVar8 = iVar8 + 1;
    pbVar3 = pbVar3 + 1;
    if ((char)bVar1 < '\0') {
      uVar7 = 0x40;
      uVar2 = (int)(char)bVar1 & 0x40;
      while ((uVar2 != 0 && (8 < uVar7))) {
        uVar7 = uVar7 >> 1;
        pbVar3 = pbVar3 + 1;
        uVar2 = uVar7 & (int)(char)bVar1;
      }
    }
  } while( true );
}

