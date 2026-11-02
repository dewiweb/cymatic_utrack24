// rea decompile_all
// name: FUN_00022c18
// address: 0x22c18
// body: available
// range: 0x22c18-0x22d09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022c18(uint *param_1,uint *param_2,uint *param_3,undefined1 *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  bVar1 = (byte)uVar4 & 0x1f;
  uVar2 = 0;
  uVar5 = ((uint)CONCAT11(*param_4,param_4[1]) << 6 |
          param_1[(ulonglong)(uVar4 >> 5) + 3] >> bVar1 & 1) << 2 | param_5;
  uVar3 = uVar5;
  if (uVar5 != 0) {
    do {
      uVar2 = uVar2 ^ uVar3 & 1;
      uVar3 = uVar3 >> 1;
    } while (uVar3 != 0);
    if (uVar2 != 0) {
      uVar5 = uVar5 | 8;
    }
  }
  *param_2 = (-(uint)(uVar4 != 0) & 0xffffffe0) + 0x30 | uVar5;
  uVar3 = 0;
  uVar2 = ((uint)CONCAT11(param_4[2],param_4[3]) << 6 |
          param_1[(ulonglong)(uVar4 >> 5) + 9] >> bVar1 & 1) << 2 | param_5;
  uVar4 = uVar2;
  if (uVar2 != 0) {
    do {
      uVar3 = uVar3 ^ uVar4 & 1;
      uVar4 = uVar4 >> 1;
    } while (uVar4 != 0);
    if (uVar3 != 0) {
      uVar2 = uVar2 | 8;
    }
  }
  *param_3 = uVar2;
  *param_1 = *param_1 + 1;
  if (*param_1 == 0xc0) {
    *param_1 = 0;
  }
  return;
}

