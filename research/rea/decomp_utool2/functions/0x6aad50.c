// rea decompile_all
// name: FUN_006aad50
// address: 0x6aad50
// body: available
// range: 0x6aad50-0x6aaf14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aad50(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  byte extraout_DL;
  float fVar7;
  undefined4 *puVar8;
  float local_14;
  float local_10;
  
  iVar4 = param_2;
  iVar1 = *(int *)(param_2 + 0x1c);
  bVar6 = *(byte *)(param_2 + 0x69) & 0x10;
  if ((bVar6 == 0) &&
     ((*(int *)(param_2 + 0xc) == 0 || (cVar5 = FUN_006e6320(), bVar6 = extraout_DL, cVar5 != '\0'))
     )) {
    if (((char)param_5 == '\0') && ((char)param_4 == '\0')) {
      fVar7 = 0.7;
    }
    else {
      fVar7 = 1.2;
    }
  }
  else {
    fVar7 = 0.4;
  }
  local_14 = 0.1;
  local_10 = fVar7 * 0.5;
  if ((*(uint *)(iVar4 + 0xb8) >> 2 & 1) != 0) {
    local_10 = 0.1;
  }
  if ((*(uint *)(iVar4 + 0xb8) >> 3 & 1) == 0) {
    local_14 = fVar7 * 0.5;
  }
  iVar3 = DAT_00c8a678;
  if ((bVar6 == 0) && (*(int *)(iVar4 + 0xc) != 0)) {
    FUN_006e6320();
    iVar3 = DAT_00c8a678;
  }
  for (; (iVar3 != iVar4 && (iVar3 != 0)); iVar3 = *(int *)(iVar3 + 0xc)) {
  }
  puVar8 = &param_2;
  FUN_006ab370(*param_3,param_4,param_5,puVar8);
  FUN_00684d10(puVar8);
  uVar2 = *(uint *)(iVar4 + 0xb8);
  FUN_006a59b0(((float)iVar1 - local_10) - local_14,fVar7,0xbf800000,*(byte *)(iVar4 + 0xb8) & 1,
               (byte)(uVar2 >> 1) & 1,(byte)(uVar2 >> 2) & 1,(byte)(uVar2 >> 3) & 1);
  return;
}

