// rea decompile_all
// name: FUN_005b3f50
// address: 0x5b3f50
// body: available
// range: 0x5b3f50-0x5b4061 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b3f50(void)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  int *_Memory;
  int iVar8;
  int iVar9;
  int local_1c [2];
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007191c4;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c[1] = 0;
  FUN_006329c0(in_ECX,"\"#@,;:<>*^|?\\/","______________");
  local_8 = 0;
  iVar9 = 0;
  local_1c[1] = 1;
LAB_005b3fb5:
  local_14 = (byte *)*in_ECX;
  iVar8 = 0;
  pbVar5 = local_14;
LAB_005b3fc0:
  do {
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    if ((char)bVar2 < '\0') {
      if ((*pbVar5 & 0xc0) == 0x80) {
        do {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
        } while ((*pbVar1 & 0xc0) == 0x80);
        iVar8 = iVar8 + 1;
        goto LAB_005b3fc0;
      }
    }
    else if (bVar2 == 0) break;
    iVar8 = iVar8 + 1;
  } while( true );
  if (iVar8 <= iVar9) {
    ExceptionList = local_10;
    return;
  }
  FUN_0044ebd0(iVar9);
  uVar6 = FUN_00426f70(uVar4);
  if (0x7f < uVar6) {
    puVar7 = (undefined4 *)FUN_00631550(local_1c,iVar9,1,&DAT_00748b64);
    uVar3 = *in_ECX;
    *in_ECX = *puVar7;
    *puVar7 = uVar3;
    _Memory = (int *)(local_1c[0] + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar8 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  }
  iVar9 = iVar9 + 1;
  goto LAB_005b3fb5;
}

