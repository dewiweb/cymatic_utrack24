// rea decompile_all
// name: FUN_004e80b4
// address: 0x4e80b4
// body: available
// range: 0x4e80b4-0x4e828a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004e80b4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_ECX;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined1 **ppuStack_40;
  undefined1 *puStack_3c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4e80c0;
  puStack_3c = (undefined1 *)0x14;
  ppuStack_40 = (undefined1 **)0x4e80c7;
  local_20 = FUN_005af82d();
  local_8 = 0;
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    puStack_3c = (undefined1 *)param_3;
    ppuStack_40 = (undefined1 **)(param_1 + 4);
    local_28 = (undefined1 *)&ppuStack_40;
    FUN_004d076d();
    local_20 = FUN_004e7f09(local_20,&DAT_0095d718);
  }
  local_8 = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x10);
  local_14 = 0;
  local_18 = 0;
  if (0 < iVar2) {
    local_1c = (undefined4 *)(param_1 + 8);
    piVar4 = (int *)*local_1c;
    while( true ) {
      iVar5 = *piVar4;
      iVar1 = *(int *)(iVar5 + 8) + local_14;
      if (param_2 == local_14) {
        iVar5 = local_18;
        if (local_18 < iVar2) {
          do {
            puStack_3c = (undefined1 *)0x4e8162;
            FUN_004f7022();
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(param_1 + 0x10));
        }
        goto LAB_004e8278;
      }
      if ((local_14 <= param_2) && (param_2 < iVar1)) break;
      local_18 = local_18 + 1;
      iVar2 = *(int *)(param_1 + 0x10);
      piVar4 = piVar4 + 1;
      local_14 = iVar1;
      if (iVar2 <= local_18) {
        return local_20;
      }
    }
    puStack_3c = (undefined1 *)0xc;
    ppuStack_40 = (undefined1 **)0x4e817f;
    iVar2 = FUN_005af82d();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      puStack_3c = (undefined1 *)0x4e818b;
      FUN_004652cd();
      iVar2 = extraout_ECX;
    }
    puStack_3c = (undefined1 *)(param_2 - local_14);
    ppuStack_40 = (undefined1 **)0x4e81a2;
    local_28 = puStack_3c;
    FUN_004664c4();
    ppuStack_40 = (undefined1 **)0x4e81aa;
    puStack_3c = (undefined1 *)iVar2;
    FUN_00465317();
    puStack_3c = (undefined1 *)0x4e81b2;
    FUN_004652d6();
    ppuStack_40 = (undefined1 **)0x4e81be;
    puStack_3c = (undefined1 *)iVar2;
    puStack_3c = (undefined1 *)FUN_004e7e2d();
    local_8 = 1;
    ppuStack_40 = (undefined1 **)0x4e81ce;
    fVar6 = (float10)FUN_0049fa7b();
    *(float *)(iVar2 + 4) = (float)fVar6;
    local_8 = 0xffffffff;
    puStack_3c = (undefined1 *)0x4e81dc;
    FUN_004652d6();
    puStack_3c = (undefined1 *)0x4e81e3;
    uVar3 = thunk_FUN_0046087d();
    local_24 = local_20 + 8;
    *(uint *)(iVar2 + 8) = uVar3 & 0xffff;
    puStack_3c = (undefined1 *)0x4e81f7;
    FUN_004f7022();
    puStack_3c = local_28;
    ppuStack_40 = &local_28;
    FUN_0046642b(iVar5);
    ppuStack_40 = (undefined1 **)0x4e820e;
    puStack_3c = (undefined1 *)iVar5;
    FUN_00465317();
    puStack_3c = (undefined1 *)0x4e8216;
    FUN_004652d6();
    ppuStack_40 = (undefined1 **)0x4e8222;
    puStack_3c = (undefined1 *)iVar5;
    puStack_3c = (undefined1 *)FUN_004e7e2d();
    local_8 = 2;
    ppuStack_40 = (undefined1 **)0x4e8234;
    fVar6 = (float10)FUN_0049fa7b();
    *(float *)(iVar5 + 4) = (float)fVar6;
    puStack_3c = (undefined1 *)0x4e823f;
    FUN_004652d6();
    *(uint *)(iVar5 + 8) = param_2 - local_14 & 0xffff;
    iVar2 = local_18 + 1;
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      do {
        puStack_3c = (undefined1 *)0x4e8267;
        FUN_004f7022();
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x10));
    }
LAB_004e8278:
    puStack_3c = (undefined1 *)0x4e8280;
    FUN_004f703e();
  }
  return local_20;
}

