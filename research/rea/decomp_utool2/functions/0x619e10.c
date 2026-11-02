// rea decompile_all
// name: FUN_00619e10
// address: 0x619e10
// body: available
// range: 0x619e10-0x61a09b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00619e10(uint param_1)

{
  uint in_ECX;
  uint uVar1;
  uint *in_EDX;
  uint uVar2;
  uint local_8;
  
  uVar1 = ~in_ECX;
  for (; (param_1 != 0 && (((uint)in_EDX & 3) != 0)); in_EDX = (uint *)((int)in_EDX + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00bfe3e0 + (((byte)*in_EDX ^ uVar1) & 0xff) * 4);
    param_1 = param_1 - 1;
  }
  if (0x1f < param_1) {
    local_8 = param_1 >> 5;
    do {
      uVar1 = uVar1 ^ *in_EDX;
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[1];
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[2];
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[3];
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[4];
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[5];
      param_1 = param_1 - 0x20;
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[6];
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4) ^ in_EDX[7];
      in_EDX = in_EDX + 8;
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4);
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  if (3 < param_1) {
    uVar2 = param_1 >> 2;
    do {
      uVar1 = uVar1 ^ *in_EDX;
      param_1 = param_1 - 4;
      in_EDX = in_EDX + 1;
      uVar1 = *(uint *)(&DAT_00bfe7e0 + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfebe0 + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00bfe3e0 + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&DAT_00bfefe0 + (uVar1 & 0xff) * 4);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  for (; param_1 != 0; param_1 = param_1 - 1) {
    uVar2 = *in_EDX;
    in_EDX = (uint *)((int)in_EDX + 1);
    uVar1 = uVar1 >> 8 ^ *(uint *)(&DAT_00bfe3e0 + (((byte)uVar2 ^ uVar1) & 0xff) * 4);
  }
  return ~uVar1;
}

