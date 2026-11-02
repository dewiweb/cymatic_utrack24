// rea decompile_all
// name: FUN_004812a9
// address: 0x4812a9
// body: available
// range: 0x4812a9-0x481315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004812a9(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_20 [6];
  int *local_8;
  
  iVar1 = param_1[0x57];
  uVar2 = *(undefined4 *)param_1[6];
  uVar3 = ((undefined4 *)param_1[6])[1];
  puVar6 = (undefined4 *)(iVar1 + 0xc);
  puVar7 = local_20;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_8 = param_1;
  cVar4 = FUN_00480fae();
  if (cVar4 == '\0') {
    *(undefined4 *)(*param_1 + 0x14) = 0x18;
    (**(code **)*param_1)(param_1);
  }
  *(undefined4 *)param_1[6] = uVar2;
  *(undefined4 *)(param_1[6] + 4) = uVar3;
  puVar6 = local_20;
  puVar7 = (undefined4 *)(iVar1 + 0xc);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return;
}

