// rea decompile_all
// name: FUN_0042fc48
// address: 0x42fc48
// body: available
// range: 0x42fc48-0x42fe3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042fc48(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *_Dst;
  void *local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_2;
  local_c = param_2[4];
  puVar2 = *(undefined4 **)(param_1 + 0x1e8);
  piVar1 = param_2 + 0x4f;
  (*(code *)param_2[7])(param_2);
  if (((char *)*piVar3 < (char *)piVar3[2]) && (*(char *)*piVar3 == '[')) {
    (*(code *)piVar3[8])(piVar3);
    (*(code *)piVar3[7])(piVar3);
    if (((char *)piVar3[2] <= (char *)*piVar3) || (*(char *)*piVar3 != ']')) {
      piVar3[3] = 3;
    }
  }
  else {
    iVar4 = (*(code *)piVar3[9])(piVar3);
    (*(code *)piVar3[8])(piVar3);
    if (piVar3[3] == 0) {
      (*(code *)piVar3[7])(piVar3);
      if (piVar3[0x4e] != 0) goto LAB_0042fe0b;
      local_8 = (**(code **)*puVar2)(piVar1,iVar4,local_c);
      while (local_8 == 0) {
LAB_0042fe0b:
        do {
          if (((uint)piVar3[2] <= *piVar3 + 4U) ||
             (iVar5 = _strncmp((char *)*piVar3,"dup",3), iVar5 != 0)) {
            if (piVar3[0x4e] != 0) {
              return;
            }
            piVar3[0x4e] = iVar4;
            return;
          }
          (*(code *)piVar3[8])(piVar3);
          uVar6 = (*(code *)piVar3[9])(piVar3);
          iVar5 = FUN_0042f79b(&param_2,&local_10,*(int *)(*(int *)(param_1 + 0x80) + 0x34) != 0);
          if (iVar5 == 0) {
            return;
          }
          (*(code *)piVar3[8])(piVar3);
          if (piVar3[3] != 0) {
            return;
          }
          (*(code *)piVar3[7])(piVar3);
          if (((char *)*piVar3 + 4 < (char *)piVar3[2]) &&
             (iVar5 = _strncmp((char *)*piVar3,"put",3), iVar5 == 0)) {
            (*(code *)piVar3[8])(piVar3);
            (*(code *)piVar3[7])(piVar3);
          }
        } while (piVar3[0x4e] != 0);
        if (*(int *)(param_1 + 0xac) < 0) {
          local_8 = (*(code *)piVar3[0x5a])(piVar1,uVar6,local_10,param_2);
        }
        else {
          if ((int)param_2 < *(int *)(param_1 + 0xac)) {
            local_8 = 3;
            break;
          }
          _Dst = (void *)FUN_00411912(param_2,&local_8);
          if (local_8 != 0) break;
          _memcpy(_Dst,local_10,(size_t)param_2);
          (*(code *)puVar2[4])(_Dst,param_2,0x10ea);
          param_2 = (int *)((int)param_2 - *(int *)(param_1 + 0xac));
          local_8 = (*(code *)piVar3[0x5a])
                              (piVar1,uVar6,*(int *)(param_1 + 0xac) + (int)_Dst,param_2);
          FUN_00411a5c(_Dst);
        }
      }
      piVar3[3] = local_8;
    }
  }
  return;
}

