// rea decompile_all
// name: FUN_0066c740
// address: 0x66c740
// body: available
// range: 0x66c740-0x66c7ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066c740(byte *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int *in_EDX;
  int iVar7;
  
  if (*in_EDX == 0) {
    iVar5 = (**(code **)in_ECX[1])();
    *(undefined1 *)(iVar5 + 0x111) = 0;
    *in_EDX = iVar5;
  }
  puVar1 = (undefined4 *)*in_EDX;
  iVar7 = 0;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  iVar5 = 8;
  *puVar1 = *(undefined4 *)param_1;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(byte *)(puVar1 + 4) = param_1[0x10];
  iVar6 = 0;
  do {
    iVar7 = iVar7 + (uint)param_1[1];
    iVar6 = iVar6 + (uint)param_1[2];
    iVar5 = iVar5 + -1;
    param_1 = param_1 + 2;
  } while (iVar5 != 0);
  iVar7 = iVar7 + iVar6;
  if ((iVar7 < 1) || (0x100 < iVar7)) {
    *(undefined4 *)(*in_ECX + 0x14) = 8;
    (**(code **)*in_ECX)();
  }
  FUN_004c2c30(*in_EDX + 0x11,param_2,iVar7);
  *(undefined1 *)(*in_EDX + 0x111) = 0;
  return;
}

