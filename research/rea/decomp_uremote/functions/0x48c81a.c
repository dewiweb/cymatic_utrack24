// rea decompile_all
// name: FUN_0048c81a
// address: 0x48c81a
// body: available
// range: 0x48c81a-0x48c937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048c81a(int *param_1,int *param_2,uint param_3,uint param_4,char param_5)

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
      FUN_0048c707(param_1,1);
      *(undefined1 *)((int)param_2 + 0x21) = 0;
    }
    uVar4 = param_3;
    if ((param_3 <= (uint)param_2[6]) && (uVar4 = uVar1 - param_2[4], (int)uVar4 < 0)) {
      uVar4 = 0;
    }
    param_2[6] = uVar4;
    FUN_0048c707(param_1,0);
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
      iVar2 = param_2[2];
      iVar3 = param_2[6];
      for (uVar4 = uVar4 - iVar3; uVar4 < uVar1 - iVar3; uVar4 = uVar4 + 1) {
        FUN_0048e721(*(undefined4 *)(*param_2 + uVar4 * 4),iVar2);
      }
      goto LAB_0048c91e;
    }
    if (param_5 == '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
      goto LAB_0048c91e;
    }
  }
  else {
LAB_0048c91e:
    if (param_5 == '\0') goto LAB_0048c928;
  }
  *(undefined1 *)((int)param_2 + 0x21) = 1;
LAB_0048c928:
  return *param_2 + (param_3 - param_2[6]) * 4;
}

