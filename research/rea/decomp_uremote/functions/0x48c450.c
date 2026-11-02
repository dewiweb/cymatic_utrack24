// rea decompile_all
// name: FUN_0048c450
// address: 0x48c450
// body: available
// range: 0x48c450-0x48c4ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048c450(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(0x3b9ac9f0 / (ulonglong)(uint)(param_3 * 0x80));
  iVar2 = param_1[1];
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x46;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar2 + 0x50) = uVar1;
  iVar2 = FUN_0048c23a(param_1,param_2,param_4 << 2);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      if (param_4 - uVar5 <= uVar1) {
        uVar1 = param_4 - uVar5;
      }
      iVar3 = FUN_0048c332(param_1,param_2,uVar1 * param_3 * 0x80);
      for (uVar4 = uVar1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(int *)(iVar2 + uVar5 * 4) = iVar3;
        iVar3 = iVar3 + param_3 * 0x80;
        uVar5 = uVar5 + 1;
      }
    } while (uVar5 < param_4);
  }
  return iVar2;
}

