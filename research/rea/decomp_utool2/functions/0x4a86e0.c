// rea decompile_all
// name: FUN_004a86e0
// address: 0x4a86e0
// body: available
// range: 0x4a86e0-0x4a88a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a86e0(int *param_1,char param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_1c;
  undefined4 local_18;
  undefined8 local_14;
  int *local_c;
  
  piVar1 = in_ECX + 0x1f;
  local_c = in_ECX;
  uVar5 = FUN_004ad750(param_1[3]);
  local_14 = FUN_00687700();
  (**(code **)(*local_c + 0x2c))(&local_1c,(float)*param_1 / 100.0,(float)param_1[1] / 100.0);
  bVar2 = false;
  if (param_2 == '\0') {
    uVar9 = DAT_00c8a9dc & 0xffffff8f;
    if (param_3 == '\0') {
      uVar9 = uVar9 | 0x10;
    }
    else {
      FUN_004ad6f0(uVar5);
      iVar7 = in_ECX[0x21] + -1;
      if (-1 < iVar7) {
        piVar6 = (int *)(*piVar1 + iVar7 * 4);
        do {
          if (*piVar6 != 0) {
            bVar3 = true;
            goto LAB_004a87df;
          }
          piVar6 = piVar6 + -1;
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      bVar3 = false;
LAB_004a87df:
      bVar2 = (bool)(bVar3 ^ 1);
      if (!bVar3) {
        if (in_ECX[0x20] != 0) {
          FID_conflict__free((void *)*piVar1);
          *piVar1 = 0;
          in_ECX[0x20] = 0;
        }
        in_ECX[0x21] = 0;
        DAT_00c8a9dc = DAT_00c8a9dc & 0xffffff8f;
      }
    }
  }
  else {
    uVar8 = DAT_00c8a9dc & 0xffffff8f;
    uVar9 = uVar8 | 0x10;
    DAT_00c8a9dc = uVar9;
    FUN_0068d900(uVar5,uVar8,local_14,local_1c,local_18);
    cVar4 = FUN_0068da80();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  FUN_0068d900(uVar5,uVar9,local_14,local_1c,local_18);
  cVar4 = FUN_0068da80();
  if (cVar4 == '\0') {
    return 0;
  }
  if ((param_3 != '\0') || (bVar2)) {
    FUN_0068d900(uVar5,DAT_00c8a9dc,local_14,0xc1200000,0xc1200000);
    cVar4 = FUN_0068da80();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  return 1;
}

