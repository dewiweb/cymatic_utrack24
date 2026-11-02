// rea decompile_all
// name: FUN_00016530
// address: 0x16530
// body: available
// range: 0x16530-0x165f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00016530(undefined8 param_1,uint *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_00029268;
  uVar3 = 0x8000;
  if (*param_2 < 0x8000) {
    uVar3 = *param_2;
  }
  *(uint *)(DAT_00029268 + 0x73c) = uVar3;
  iVar4 = FUN_000144d4(lVar2);
  uVar5 = 0;
  if (iVar4 < 0) {
    uVar5 = 0xe0000060;
  }
  if (param_3 == '\0') {
    uVar3 = *(uint *)(lVar2 + 0x6fc);
    uVar1 = *(uint *)(lVar2 + 0x73c);
    *(uint *)(lVar2 + 0x76c) = *(uint *)(lVar2 + 0x700);
    *(uint *)(lVar2 + 0x70c) = uVar1;
    *(uint *)(lVar2 + 0x774) = uVar1;
    *(int *)(lVar2 + 0x770) =
         (int)(((ulonglong)*(uint *)(lVar2 + 0x700) * 1000000) / (ulonglong)uVar3);
    *(uint *)(lVar2 + 0x768) = uVar3;
    *(int *)(lVar2 + 0x778) = (int)(((ulonglong)uVar1 * 1000000) / (ulonglong)uVar3);
    FUN_00015e00(lVar2,100,0,0,1);
  }
  return uVar5;
}

