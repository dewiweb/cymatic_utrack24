// rea decompile_all
// name: FUN_00495d75
// address: 0x495d75
// body: available
// range: 0x495d75-0x495f10 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00495d75(int param_1,uint *param_2)

{
  uint uVar1;
  int in_EAX;
  int iVar2;
  void *_Dst;
  uint uVar3;
  size_t unaff_EDI;
  int local_c;
  int local_8;
  
  uVar1 = *(uint *)(in_EAX + 0x244);
  uVar3 = 0xffffffff;
  if ((uVar1 != 0) && (uVar1 != 0xffffffff)) {
    uVar3 = uVar1;
  }
  if (uVar3 < unaff_EDI + 1) {
    FUN_0048f554();
    return -4;
  }
  uVar3 = uVar3 + (-1 - unaff_EDI);
  if (uVar3 < *param_2) {
    *param_2 = uVar3;
  }
  local_8 = FUN_00495bde(*(undefined4 *)(in_EAX + 0xd0));
  if (local_8 != 0) {
    if (local_8 != 1) {
      return local_8;
    }
    return -7;
  }
  local_c = param_1 - unaff_EDI;
  local_8 = FUN_00495c89(*(undefined4 *)(in_EAX + 0xd0),*(int *)(in_EAX + 0x260) + unaff_EDI,
                         &local_c,0);
  if (local_8 == 1) {
    iVar2 = FUN_00469f2b();
    if (iVar2 == 0) {
      uVar1 = *param_2;
      _Dst = (void *)FUN_0049167e();
      if (_Dst == (void *)0x0) {
        local_8 = -4;
        FUN_0048f554();
        goto LAB_00495ee9;
      }
      local_8 = FUN_00495c89(*(undefined4 *)(in_EAX + 0xd0),*(int *)(in_EAX + 0x260) + unaff_EDI,
                             &local_c,(int)_Dst + unaff_EDI);
      if (local_8 == 1) {
        if (uVar1 == *param_2) {
          *(undefined1 *)((int)_Dst + unaff_EDI + *param_2) = 0;
          if (unaff_EDI != 0) {
            _memcpy(_Dst,*(void **)(in_EAX + 0x260),unaff_EDI);
          }
          *(void **)(in_EAX + 0x260) = _Dst;
          *(uint *)(in_EAX + 0x264) = uVar1 + 1 + unaff_EDI;
        }
        else {
LAB_00495e93:
          local_8 = -7;
        }
      }
      else if (local_8 == 0) goto LAB_00495e93;
      FUN_00491789();
      if ((local_8 == 1) && (param_1 - unaff_EDI != local_c)) {
        FUN_004914ad();
      }
      goto LAB_00495ee9;
    }
    FUN_0048f554();
  }
  else if (local_8 != 0) goto LAB_00495ee9;
  local_8 = -7;
LAB_00495ee9:
  *(undefined4 *)(in_EAX + 0x34) = 0;
  return local_8;
}

