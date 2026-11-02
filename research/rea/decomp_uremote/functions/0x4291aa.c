// rea decompile_all
// name: FUN_004291aa
// address: 0x4291aa
// body: available
// range: 0x4291aa-0x4292db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004291aa(int *param_1)

{
  ushort *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  
  iVar2 = *param_1;
  puVar1 = (ushort *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  piVar5 = param_1 + 3;
  puVar6 = puVar1;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(int *)puVar6 = *piVar5;
    piVar5 = piVar5 + 1;
    puVar6 = puVar6 + 2;
  }
  if ((*puVar1 == 0) || (*(short *)((int)param_1 + 0x2e) == 0)) {
    uVar3 = 0x97;
  }
  else {
    if ((*(byte *)(iVar2 + 0xb0) & 8) != 0) {
      iVar4 = FUN_0040d2d8();
      param_1[0xc] = iVar4;
      iVar4 = FUN_0040d2d8();
      param_1[0xd] = iVar4;
      iVar4 = thunk_FUN_00401000((int)*(short *)(iVar2 + 0x46),iVar4);
      param_1[0xe] = iVar4 + 0x20U & 0xffffffc0;
      iVar4 = thunk_FUN_00401000((int)*(short *)(iVar2 + 0x48),param_1[0xd]);
      param_1[0xf] = iVar4 + 0x20U & 0xffffffc0;
      iVar4 = thunk_FUN_00401000((int)*(short *)(iVar2 + 0x4a),param_1[0xd]);
      param_1[0x10] = iVar4 + 0x20U & 0xffffffc0;
      iVar2 = thunk_FUN_00401000((int)*(short *)(iVar2 + 0x4c),param_1[0xc]);
      param_1[0x11] = iVar2 + 0x20U & 0xffffffc0;
    }
    if (*puVar1 < *(ushort *)((int)param_1 + 0x2e)) {
      param_1[0x16] = param_1[0xd];
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)((int)param_1 + 0x2e);
      iVar2 = FUN_0040d230(0x10000);
      param_1[0x12] = iVar2;
      param_1[0x13] = 0x10000;
    }
    else {
      param_1[0x16] = param_1[0xc];
      *(ushort *)(param_1 + 0x14) = *puVar1;
      param_1[0x12] = 0x10000;
      iVar2 = FUN_0040d230(0x10000);
      param_1[0x13] = iVar2;
    }
    *(undefined1 *)((int)param_1 + 0x12d) = 0;
    *(undefined1 *)(param_1 + 0x1b) = 1;
    uVar3 = 0;
  }
  return uVar3;
}

