// rea decompile_all
// name: FUN_006bcf70
// address: 0x6bcf70
// body: available
// range: 0x6bcf70-0x6bd107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bcf70(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  
  local_34 = param_1;
  local_38 = 0x6bcf84;
  FUN_006c5da0();
  uVar2 = *(undefined4 *)(in_ECX + 0x98);
  local_34 = (undefined4 *)0x6bcf97;
  FUN_0046fd00();
  uVar1 = *(undefined4 *)(in_ECX + 0x9c);
  local_34 = (undefined4 *)0x6bcfd8;
  FUN_0046fd00();
  local_34 = *(undefined4 **)(in_ECX + 0xac);
  local_38 = *(undefined4 *)(in_ECX + 0xa8);
  local_44 = *(undefined4 *)(in_ECX + 0xa4);
  local_40 = 0;
  local_48 = *(undefined4 *)(in_ECX + 0xa0);
  local_3c = uVar1;
  uVar1 = FUN_0067fb40(*(undefined4 *)(in_ECX + 0x9c),uVar2,0);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    local_34 = (undefined4 *)0x6bd072;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  local_38 = 0x6bd07a;
  local_34 = (undefined4 *)uVar1;
  (**(code **)(*(int *)*param_1 + 0xc))();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    local_38 = 0x6bd08b;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  local_38 = in_ECX + 0xb4;
  local_3c = 0x6bd099;
  (**(code **)(*(int *)*param_1 + 0x68))();
  local_3c = *(undefined4 *)(in_ECX + 0xbc);
  local_40 = 0x6bd0ab;
  FUN_00684c50();
  FUN_0046f710(&local_48);
  FUN_00682290(in_ECX + 0xb8,*(undefined4 *)(in_ECX + 0xc0),0x100000,0);
  return;
}

