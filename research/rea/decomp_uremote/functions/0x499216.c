// rea decompile_all
// name: FUN_00499216
// address: 0x499216
// body: available
// range: 0x499216-0x499470 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00499216(int param_1,int param_2,int param_3)

{
  char *_Str;
  void *pvVar1;
  int iVar2;
  size_t _Size;
  void *pvVar3;
  size_t _Size_00;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_14;
  size_t local_10;
  size_t local_8;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar2 = *(int *)(param_2 + 0x80);
    if (*(int *)(param_2 + 0x84) - iVar2 < 1) {
      uVar4 = 0x7fffffff;
      if (0x7fffffff - iVar2 < 1) {
LAB_00499291:
        FUN_004914c8(1);
        return 1;
      }
      if (iVar2 + 1 < 0x7ffffff7) {
        uVar4 = iVar2 + 9U & 0xfffffff8;
      }
      iVar2 = FUN_004916cf(param_1,*(undefined4 *)(param_2 + 0x88),0x1c);
      if (iVar2 == 0) goto LAB_00499291;
      FUN_00491789(param_1,*(undefined4 *)(param_2 + 0x88));
      *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x4000;
      *(int *)(param_2 + 0x88) = iVar2;
      *(uint *)(param_2 + 0x84) = uVar4;
    }
    local_14 = 0;
    puVar6 = (undefined4 *)(param_3 + 0x14);
    do {
      piVar5 = (int *)(*(int *)(param_2 + 0x80) * 0x1c + *(int *)(param_2 + 0x88));
      if ((char *)puVar6[-4] != (char *)0x0) {
        if (((int)puVar6[-5] < -1) || (2 < (int)puVar6[-5])) {
          FUN_004914c8(1);
        }
        else {
          _Size = _strlen((char *)puVar6[-4]);
          _Size_00 = 0;
          if ((int)puVar6[-5] < 1) {
            local_8 = 0;
          }
          else {
            if ((char *)*puVar6 == (char *)0x0) {
              local_8 = 0;
            }
            else {
              local_8 = _strlen((char *)*puVar6);
            }
            if ((char *)puVar6[1] == (char *)0x0) {
              _Size_00 = 0;
            }
            else {
              _Size_00 = _strlen((char *)puVar6[1]);
            }
          }
          _Str = (char *)puVar6[-3];
          if ((_Str == (char *)0x0) || (*_Str == '\0')) {
            local_10 = 0;
            iVar2 = (uint)(0 < (int)puVar6[-5]) * 2 + -1;
          }
          else {
            local_10 = _strlen(_Str);
            iVar2 = puVar6[-5];
          }
          *piVar5 = iVar2;
          pvVar3 = (void *)FUN_0049167e();
          piVar5[1] = (int)pvVar3;
          if (pvVar3 == (void *)0x0) goto LAB_00499291;
          _memcpy(pvVar3,(void *)puVar6[-4],_Size);
          *(undefined1 *)(_Size + piVar5[1]) = 0;
          if ((int)puVar6[-5] < 1) {
            piVar5[5] = 0;
            piVar5[6] = 0;
            pvVar3 = (void *)(piVar5[1] + 1 + _Size);
          }
          else {
            pvVar1 = (void *)*puVar6;
            pvVar3 = (void *)(piVar5[1] + 1 + _Size);
            piVar5[5] = (int)pvVar3;
            _memcpy(pvVar3,pvVar1,local_8);
            *(undefined1 *)(local_8 + piVar5[5]) = 0;
            pvVar1 = (void *)puVar6[1];
            pvVar3 = (void *)(piVar5[5] + 1 + local_8);
            piVar5[6] = (int)pvVar3;
            _memcpy(pvVar3,pvVar1,_Size_00);
            *(undefined1 *)(_Size_00 + piVar5[6]) = 0;
            pvVar3 = (void *)(piVar5[6] + 1 + _Size_00);
          }
          piVar5[2] = (int)pvVar3;
          if (local_10 != 0) {
            _memcpy(pvVar3,(void *)puVar6[-3],local_10);
          }
          *(undefined1 *)(local_10 + piVar5[2]) = 0;
          if (*piVar5 < 1) {
            piVar5[3] = local_10;
            piVar5[4] = 0;
          }
          else {
            piVar5[3] = 0;
            piVar5[4] = local_10;
          }
          *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + 1;
        }
      }
      local_14 = local_14 + 1;
      puVar6 = puVar6 + 7;
    } while (local_14 < 1);
  }
  return 0;
}

