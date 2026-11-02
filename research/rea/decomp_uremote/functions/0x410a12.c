// rea decompile_all
// name: FUN_00410a12
// address: 0x410a12
// body: available
// range: 0x410a12-0x410bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00410a12(undefined4 param_1,int param_2,int param_3,int *param_4,size_t *param_5)

{
  size_t sVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *_Base;
  int *piVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  local_8 = FUN_0041106d();
  if (local_8 != 0) {
    return local_8;
  }
  uVar4 = FUN_00411377();
  if (local_8 != 0) {
    return local_8;
  }
  local_c = 0;
  if ((uVar4 & 0xffff) != 0xffffffff) {
    do {
      iVar5 = FUN_0041148f();
      if (local_8 != 0) {
        return local_8;
      }
      uVar6 = FUN_00411377();
      if (local_8 != 0) {
        return local_8;
      }
      FUN_00411377();
      if (local_8 != 0) {
        return local_8;
      }
      if (iVar5 == param_3) {
        *param_5 = (uVar6 & 0xffff) + 1;
        local_8 = FUN_0041106d();
        if (local_8 != 0) {
          return local_8;
        }
        iVar5 = 0;
        _Base = (void *)FUN_00411976(8,0,&local_8);
        if (local_8 != 0) {
          return local_8;
        }
        if (0 < (int)*param_5) goto LAB_00410ae9;
        goto LAB_00410b4c;
      }
      local_c = local_c + 1;
    } while (local_c < (int)((uVar4 & 0xffff) + 1));
  }
  return 1;
  while( true ) {
    *(uint *)((int)_Base + iVar5 * 8 + 4) = uVar4 & 0xffffff;
    iVar5 = iVar5 + 1;
    if ((int)*param_5 <= iVar5) break;
LAB_00410ae9:
    uVar3 = FUN_00411377();
    *(undefined2 *)((int)_Base + iVar5 * 8) = uVar3;
    if ((((local_8 != 0) || (local_8 = FUN_00411095(2), local_8 != 0)) ||
        (uVar4 = FUN_0041148f(), local_8 != 0)) || (local_8 = FUN_00411095(4), local_8 != 0))
    goto LAB_00410ba0;
  }
LAB_00410b4c:
  _qsort(_Base,*param_5,8,(_PtFuncCompare *)&LAB_004109f6);
  iVar5 = FUN_00411976(4,0,&local_8);
  if (local_8 == 0) {
    iVar8 = 0;
    if (0 < (int)*param_5) {
      sVar1 = *param_5;
      piVar7 = (int *)((int)_Base + 4);
      do {
        iVar2 = *piVar7;
        piVar7 = piVar7 + 2;
        *(int *)(iVar5 + iVar8 * 4) = iVar2 + param_2;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)sVar1);
    }
    *param_4 = iVar5;
    local_8 = 0;
  }
LAB_00410ba0:
  FUN_00411a5c(_Base);
  return local_8;
}

