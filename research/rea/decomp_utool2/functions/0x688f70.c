// rea decompile_all
// name: FUN_00688f70
// address: 0x688f70
// body: available
// range: 0x688f70-0x689104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688f70(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = FUN_00688ab0(param_2);
  if ((iVar3 != param_1) && (*param_2 != 0)) {
    iVar3 = *(int *)(in_ECX + 0x30) + -1;
    if (-1 < iVar3) {
      puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x28) + iVar3 * 4);
      do {
        if (*(int *)*puVar6 == param_1) {
          FUN_004aeef0(param_3,param_2);
          goto LAB_006890cd;
        }
        puVar6 = puVar6 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 0x24) + 0x14) + -1;
    if (-1 < iVar3) {
      iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 0xc);
      puVar6 = (undefined4 *)(iVar5 + iVar3 * 4);
      while (*(int *)*puVar6 != param_1) {
        puVar6 = puVar6 + -1;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
      }
      iVar3 = *(int *)(iVar5 + iVar3 * 4);
      if (iVar3 != 0) {
        piVar4 = operator_new(0x14);
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        piVar4[3] = 0;
        *piVar4 = param_1;
        iVar5 = piVar4[3] + 1;
        if (piVar4[2] < iVar5) {
          FUN_0041c930(iVar5 / 2 + piVar4[3] + 9 & 0xfffffff8);
        }
        iVar5 = piVar4[3];
        piVar4[3] = iVar5 + 1;
        piVar1 = (int *)(piVar4[1] + iVar5 * 0xc);
        if (piVar1 != (int *)0x0) {
          *piVar1 = *param_2;
          piVar1[1] = param_2[1];
          piVar1[2] = param_2[2];
        }
        *(byte *)(piVar4 + 4) = (byte)(*(uint *)(iVar3 + 0x1c) >> 2) & 1;
        iVar3 = *(int *)(in_ECX + 0x30) + 1;
        if (*(int *)(in_ECX + 0x2c) < iVar3) {
          FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0x30) + 9 & 0xfffffff8);
        }
        iVar3 = *(int *)(in_ECX + 0x30);
        *(int *)(in_ECX + 0x30) = iVar3 + 1;
        *(int **)(*(int *)(in_ECX + 0x28) + iVar3 * 4) = piVar4;
LAB_006890cd:
        if (0 < *(int *)(in_ECX + 0x1c)) {
          piVar4 = (int *)(*(int *)(in_ECX + 0xc) + 0xc);
          LOCK();
          iVar3 = *piVar4;
          if (iVar3 == 0) {
            *piVar4 = 1;
            iVar3 = 0;
          }
          UNLOCK();
          if ((iVar3 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
            LOCK();
            *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc) = 0;
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}

