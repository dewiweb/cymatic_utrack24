// rea decompile_all
// name: FUN_006bd5c0
// address: 0x6bd5c0
// body: available
// range: 0x6bd5c0-0x6bd6ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006bd5c0(int *param_1,char param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb0) != *param_1) {
    cVar5 = FUN_00468d30(*param_1);
    if (cVar5 == '\0') {
      iVar3 = *param_1;
      if (*(int *)(in_ECX + 0xb0) != iVar3) {
        if (iVar3 != 0) {
          LOCK();
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
          UNLOCK();
        }
        puVar4 = *(undefined4 **)(in_ECX + 0xb0);
        *(int *)(in_ECX + 0xb0) = iVar3;
        if (puVar4 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = puVar4 + 1;
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar4)(1);
          }
        }
      }
      if (param_2 != '\0') {
        fVar2 = *(float *)(*(int *)(in_ECX + 0xb0) + 0x14);
        puVar6 = operator_new(0x18);
        *puVar6 = juce::Expression::Helpers::Constant::vftable;
        *(undefined1 *)(puVar6 + 4) = 0;
        puVar6[1] = 1;
        *(double *)(puVar6 + 2) = (double)fVar2;
        puVar4 = *(undefined4 **)(in_ECX + 0x90);
        *(undefined4 **)(in_ECX + 0x90) = puVar6;
        if (puVar4 != (undefined4 *)0x0) {
          piVar1 = puVar4 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(1);
          }
        }
        fVar2 = *(float *)(*(int *)(in_ECX + 0xb0) + 0x18);
        puVar6 = operator_new(0x18);
        *puVar6 = juce::Expression::Helpers::Constant::vftable;
        *(undefined1 *)(puVar6 + 4) = 0;
        puVar6[1] = 1;
        *(double *)(puVar6 + 2) = (double)fVar2;
        puVar4 = *(undefined4 **)(in_ECX + 0x94);
        *(undefined4 **)(in_ECX + 0x94) = puVar6;
        if (puVar4 != (undefined4 *)0x0) {
          piVar1 = puVar4 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar4)(1);
          }
        }
      }
      FUN_006bd3a0();
    }
  }
  return;
}

