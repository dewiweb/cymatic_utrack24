// rea decompile_all
// name: FUN_00589380
// address: 0x589380
// body: available
// range: 0x589380-0x5897b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589380(uint *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_0057b2a0(param_1);
  *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x28);
  *param_1 = *param_1 + 2;
  FUN_00507c90(param_1);
  if (((*(ushort *)(in_ECX + 0x28) & 7) != 0) && ((*(ushort *)(in_ECX + 0x28) & 7) < 3)) {
    FUN_00507c90(param_1);
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  switch(*(ushort *)(in_ECX + 0x28) & 0xff8) {
  case 8:
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x58);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x5c);
    *param_1 = *param_1 + 4;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x50);
    *param_1 = *param_1 + 2;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x52);
    *param_1 = *param_1 + 2;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x54);
    *param_1 = *param_1 + 2;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x56);
    *param_1 = *param_1 + 2;
    FUN_0054b9f0(param_1,in_ECX + 0x70);
    *param_1 = *param_1 + 1 & 0xfffffffe;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x60);
    *param_1 = *param_1 + 2;
    break;
  case 0x10:
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = *(undefined4 *)(in_ECX + 0x50);
    puVar1[1] = *(undefined4 *)(in_ECX + 0x54);
    *param_1 = *param_1 + 8;
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = *(undefined4 *)(in_ECX + 0x58);
    puVar1[1] = *(undefined4 *)(in_ECX + 0x5c);
    *param_1 = *param_1 + 8;
    puVar1 = (undefined4 *)*param_1;
    *puVar1 = *(undefined4 *)(in_ECX + 0x60);
    puVar1[1] = *(undefined4 *)(in_ECX + 100);
    *param_1 = *param_1 + 8;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x4c);
    *param_1 = *param_1 + 2;
    FUN_0054b9f0(param_1,in_ECX + 0x70);
    break;
  case 0x18:
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x54);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x58);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x5c);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x60);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 100);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x68);
    *param_1 = *param_1 + 4;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x4c);
    *param_1 = *param_1 + 2;
    *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x50);
    *param_1 = *param_1 + 1;
    *(undefined1 *)*param_1 = 0;
    *param_1 = *param_1 + 1;
    FUN_0054b9f0(param_1,in_ECX + 0x70);
    break;
  case 0x20:
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x54);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x58);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x5c);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x60);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 100);
    *param_1 = *param_1 + 4;
    *(undefined4 *)*param_1 = *(undefined4 *)(in_ECX + 0x68);
    *param_1 = *param_1 + 4;
    *(undefined2 *)*param_1 = *(undefined2 *)(in_ECX + 0x4c);
    *param_1 = *param_1 + 2;
    *(undefined1 *)*param_1 = *(undefined1 *)(in_ECX + 0x50);
    *param_1 = *param_1 + 1;
    *(undefined1 *)*param_1 = 0;
    *param_1 = *param_1 + 1;
    FUN_0054b9f0(param_1,in_ECX + 0x70);
    break;
  default:
    FUN_0054b9f0(param_1,in_ECX + 0x70);
  }
  return;
}

