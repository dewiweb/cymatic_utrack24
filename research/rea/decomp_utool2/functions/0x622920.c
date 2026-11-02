// rea decompile_all
// name: FUN_00622920
// address: 0x622920
// body: available
// range: 0x622920-0x6229aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00622920(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = (**(code **)(*param_1 + 0x54))();
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar8 = (**(code **)(*param_1 + 4))();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  uVar1 = (uint)uVar8 - (uint)uVar7;
  uVar5 = (uint)((uint)uVar8 < (uint)uVar7);
  iVar6 = iVar3 - iVar2;
  iVar4 = iVar6 - uVar5;
  if ((-1 < iVar4) &&
     ((iVar4 != 0 && SBORROW4(iVar3,iVar2) == SBORROW4(iVar6,uVar5) || (uVar1 != 0)))) {
    uVar5 = uVar1;
    iVar6 = iVar4;
    if ((param_3 <= iVar4) &&
       ((((param_3 < iVar4 || (param_2 <= uVar1)) && (uVar5 = param_2, iVar6 = param_3, param_3 < 1)
         ) && (uVar5 = uVar1, iVar6 = iVar4, -1 < param_3)))) {
      uVar5 = param_2;
      iVar6 = param_3;
    }
    param_2 = uVar5;
    param_3 = iVar6;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_00622b10(*(int *)(*(int *)(in_ECX + 8) + 4) + uVar5);
    }
  }
  FUN_006201e0(param_1,param_2,param_3);
  return;
}

