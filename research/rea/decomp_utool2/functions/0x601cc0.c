// rea decompile_all
// name: FUN_00601cc0
// address: 0x601cc0
// body: available
// range: 0x601cc0-0x601d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00601cc0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  
  if (param_1._4_4_ < 1) {
    if ((-1 < param_1) && ((uint)param_1 != 0)) goto LAB_00601cec;
    param_1 = 0;
    param_1._4_4_ = 0;
  }
LAB_00601cec:
  uVar1 = *(uint *)(in_ECX + 0x60) - (uint)param_1;
  iVar2 = (*(int *)(in_ECX + 100) - param_1._4_4_) -
          (uint)(*(uint *)(in_ECX + 0x60) < (uint)param_1);
  if ((param_2._4_4_ < iVar2) || ((param_2._4_4_ <= iVar2 && ((uint)param_2 <= uVar1)))) {
    uVar1 = (uint)param_2;
    iVar2 = param_2._4_4_;
  }
  param_2._4_4_ = iVar2;
  param_2._0_4_ = uVar1;
  if ((param_2._4_4_ < 0) || ((param_2._4_4_ < 1 && ((uint)param_2 == 0)))) {
    param_2._4_4_ = 0;
    param_2._0_4_ = 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x50) + 8))
            (*(uint *)(in_ECX + 0x58) + (uint)param_1,
             *(int *)(in_ECX + 0x5c) + param_1._4_4_ +
             (uint)CARRY4(*(uint *)(in_ECX + 0x58),(uint)param_1),(uint)param_2,param_2._4_4_,
             param_3,param_4);
  return;
}

