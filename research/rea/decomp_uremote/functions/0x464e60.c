// rea decompile_all
// name: FUN_00464e60
// address: 0x464e60
// body: available
// range: 0x464e60-0x464edf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00464e60(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = (**(code **)(*param_1 + 0x54))();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  uVar8 = (**(code **)(*param_1 + 4))();
  iVar5 = (int)((ulonglong)uVar8 >> 0x20);
  uVar3 = (uint)uVar8 - (uint)uVar7;
  uVar1 = (uint)((uint)uVar8 < (uint)uVar7);
  iVar2 = iVar5 - iVar4;
  iVar6 = iVar2 - uVar1;
  if ((-1 < iVar6) &&
     ((iVar6 != 0 && SBORROW4(iVar5,iVar4) == SBORROW4(iVar2,uVar1) || (uVar3 != 0)))) {
    uVar1 = uVar3;
    iVar2 = iVar6;
    if ((param_3 <= iVar6) &&
       ((((param_3 < iVar6 || (param_2 <= uVar3)) && (uVar1 = param_2, iVar2 = param_3, param_3 < 1)
         ) && (uVar1 = uVar3, iVar2 = iVar6, -1 < param_3)))) {
      uVar1 = param_2;
      iVar2 = param_3;
    }
    param_3 = iVar2;
    param_2 = uVar1;
    if (*(int *)(in_ECX + 8) != 0) {
      FUN_00464d31();
    }
  }
  FUN_00466f42(param_1,param_2,param_3);
  return;
}

