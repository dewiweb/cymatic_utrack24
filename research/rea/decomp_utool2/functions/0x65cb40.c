// rea decompile_all
// name: FUN_0065cb40
// address: 0x65cb40
// body: available
// range: 0x65cb40-0x65cc96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0065cb40(int *param_1,int *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_3 + param_4;
  if ((((uint)param_2[1] < uVar1) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x16;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[4] + param_2[6]) < uVar1)) {
    if (*(char *)((int)param_2 + 0x22) == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x45;
      (**(code **)*param_1)(param_1);
    }
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      FUN_0065ce00(1);
      *(undefined1 *)((int)param_2 + 0x21) = 0;
    }
    if ((uint)param_2[6] < param_3) {
      param_2[6] = param_3;
    }
    else {
      iVar3 = 0;
      if (-1 < (int)(uVar1 - param_2[4])) {
        iVar3 = uVar1 - param_2[4];
      }
      param_2[6] = iVar3;
    }
    FUN_0065ce00(0);
  }
  uVar4 = param_2[7];
  if (uVar4 < uVar1) {
    if ((uVar4 < param_3) && (uVar4 = param_3, param_5 != '\0')) {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
    }
    if (param_5 != '\0') {
      param_2[7] = uVar1;
    }
    if ((char)param_2[8] != '\0') {
      iVar3 = param_2[2];
      iVar2 = param_2[6];
      for (uVar4 = uVar4 - param_2[6]; uVar4 < uVar1 - iVar2; uVar4 = uVar4 + 1) {
        _memset(*(void **)(*param_2 + uVar4 * 4),0,iVar3 << 7);
      }
      goto LAB_0065cc56;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
      return *param_2 + (param_3 - param_2[6]) * 4;
    }
  }
  else {
LAB_0065cc56:
    if (param_5 == '\0') goto LAB_0065cc60;
  }
  *(undefined1 *)((int)param_2 + 0x21) = 1;
LAB_0065cc60:
  return *param_2 + (param_3 - param_2[6]) * 4;
}

