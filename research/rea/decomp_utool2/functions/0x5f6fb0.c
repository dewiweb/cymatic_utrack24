// rea decompile_all
// name: FUN_005f6fb0
// address: 0x5f6fb0
// body: available
// range: 0x5f6fb0-0x5f7139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005f6fb0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
                int param_7,undefined4 param_8)

{
  int iVar1;
  int *in_ECX;
  int in_EDX;
  
  if (*(int *)*in_ECX != 9) {
    return 5;
  }
  if ((((in_EDX != 0) && (param_5 != 0)) && (param_7 != 0)) &&
     ((param_1 == 0 || (((param_2 != 0 && (param_3 != 0)) && (param_4 != 0)))))) {
    FUN_005fd830();
    *(code **)(in_ECX[1] + 0x20) = FUN_005f9920;
    *(code **)(in_ECX[1] + 0x24) = FUN_005f8880;
    *(code **)(in_ECX[1] + 0x28) = FUN_005f9920;
    iVar1 = FUN_005ff130();
    if (iVar1 == 0) {
      *(undefined4 *)*in_ECX = 8;
      return 3;
    }
    *(int *)in_ECX[1] = in_EDX;
    *(int *)(in_ECX[1] + 4) = param_1;
    *(int *)(in_ECX[1] + 8) = param_2;
    *(int *)(in_ECX[1] + 0xc) = param_3;
    *(int *)(in_ECX[1] + 0x10) = param_4;
    *(int *)(in_ECX[1] + 0x14) = param_5;
    *(undefined4 *)(in_ECX[1] + 0x18) = param_6;
    *(int *)(in_ECX[1] + 0x1c) = param_7;
    *(undefined4 *)(in_ECX[1] + 0x2c) = param_8;
    *(undefined4 *)(in_ECX[1] + 0xe4) = 0;
    *(undefined4 *)(in_ECX[1] + 0xe0) = 0;
    iVar1 = in_ECX[1];
    *(undefined4 *)(iVar1 + 0xe8) = 0;
    *(undefined4 *)(iVar1 + 0xec) = 0;
    *(undefined4 *)(in_ECX[1] + 0xf0) = 0;
    *(undefined4 *)(in_ECX[1] + 0xdb8) = 0;
    *(undefined4 *)(in_ECX[1] + 0xe14) = *(undefined4 *)(*in_ECX + 0x1c);
    *(undefined4 *)(in_ECX[1] + 0xe1c) = 0;
    *(undefined4 *)(in_ECX[1] + 0xe18) = 1;
    iVar1 = FUN_005f6b50();
    return (-(uint)(iVar1 != 0) & 0xfffffffd) + 3;
  }
  return 2;
}

