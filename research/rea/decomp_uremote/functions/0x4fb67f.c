// rea decompile_all
// name: FUN_004fb67f
// address: 0x4fb67f
// body: available
// range: 0x4fb67f-0x4fb706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb67f(short param_1,uint param_2)

{
  short *psVar1;
  int in_EAX;
  short in_CX;
  uint uVar2;
  short in_DX;
  
  psVar1 = (short *)(in_EAX + 8 + *(int *)(in_EAX + 0x2c0c) * 8);
  psVar1[5] = in_CX;
  psVar1[1] = in_CX;
  psVar1[8] = in_DX;
  *psVar1 = in_DX;
  psVar1[0xd] = in_CX + 1;
  psVar1[9] = in_CX + 1;
  psVar1[0xc] = in_DX + param_1;
  psVar1[4] = in_DX + param_1;
  uVar2 = (((param_2 >> 0x18) << 8 | param_2 & 0xff) << 8 | param_2 >> 8 & 0xff) << 8 |
          param_2 >> 0x10 & 0xff;
  *(uint *)(psVar1 + 2) = uVar2;
  *(uint *)(psVar1 + 6) = uVar2;
  *(uint *)(psVar1 + 10) = uVar2;
  *(uint *)(psVar1 + 0xe) = uVar2;
  *(int *)(in_EAX + 0x2c0c) = *(int *)(in_EAX + 0x2c0c) + 4;
  if (0x3fc < *(int *)(in_EAX + 0x2c0c)) {
    FUN_004fb71a();
  }
  return;
}

