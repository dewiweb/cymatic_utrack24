// rea decompile_all
// name: FUN_0048c4ee
// address: 0x48c4ee
// body: available
// range: 0x48c4ee-0x48c54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c4ee(int *param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[1];
  if (param_2 != 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0xe;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)FUN_0048c23a(param_1,param_2,0x78);
  puVar2[1] = param_5;
  puVar2[2] = param_4;
  puVar2[3] = param_6;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 8) = param_3;
  *(undefined1 *)((int)puVar2 + 0x22) = 0;
  puVar2[9] = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 **)(iVar1 + 0x44) = puVar2;
  return;
}

