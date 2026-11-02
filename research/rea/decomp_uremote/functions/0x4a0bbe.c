// rea decompile_all
// name: FUN_004a0bbe
// address: 0x4a0bbe
// body: available
// range: 0x4a0bbe-0x4a0f19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a0bbe(undefined4 param_1,undefined4 param_2,undefined1 **param_3,float param_4,
                 undefined1 *param_5,float param_6,float param_7,undefined1 *param_8,float *param_9,
                 uint param_10,undefined1 *param_11)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int iVar5;
  int *in_ECX;
  float *pfVar6;
  int *piVar7;
  undefined1 *puVar8;
  float10 fVar9;
  float10 extraout_ST1;
  float local_40;
  undefined1 *local_3c [6];
  undefined1 *local_24;
  undefined1 *local_20;
  float local_1c;
  undefined1 *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0;
  local_3c[0] = (undefined1 *)0x4a0bd8;
  iVar2 = thunk_FUN_0046087d();
  local_24 = (undefined1 *)param_3;
  local_14 = 1;
  if (iVar2 < 0xd) {
    local_20 = (undefined1 *)local_3c;
    local_40 = 6.800124e-39;
    FUN_004c751a();
    local_40 = 6.800136e-39;
    cVar1 = FUN_00466847();
    if (cVar1 == '\0') {
      param_8 = (undefined1 *)0x1;
    }
  }
  local_3c[0] = param_8;
  local_40 = 6.80016e-39;
  param_8 = (undefined1 *)FUN_00440367();
  if (1 < (int)param_8) {
    do {
      local_14 = local_14 + 1;
      local_1c = (float)local_14;
      local_18 = (undefined1 *)(param_7 / local_1c);
      local_3c[0] = (undefined1 *)0x4a0c3d;
      fVar9 = (float10)FUN_0049fa3d();
      if (extraout_ST1 < fVar9) {
        local_3c[0] = local_18;
        local_40 = 8.0;
        fVar9 = (float10)FUN_0043bcfe();
        local_3c[0] = (undefined1 *)(float)fVar9;
        local_40 = 6.800279e-39;
        FUN_0049f854();
        local_3c[0] = (undefined1 *)0x4a0c76;
        FUN_0049feb8();
        local_3c[0] = param_5;
        local_40 = param_4;
        FUN_0049fec9(&param_2);
        iVar2 = in_ECX[2] * 0x1c + -0x1c + *in_ECX;
        local_20 = *(undefined1 **)((int)param_3 * 0x1c + 0xc + *in_ECX);
        param_9 = (float *)((*(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0xc)) - (float)local_20);
      }
    } while (((local_1c <= ((float)param_9 + 80.0) / param_6) && (8.0 <= (float)local_18)) &&
            (local_14 < (int)param_8));
    if (local_14 < 1) {
      local_14 = 1;
    }
  }
  param_8 = (undefined1 *)0x0;
  param_1 = param_5;
  local_1c = (float)param_9 / (float)local_14;
  if (local_14 < 1) {
LAB_004a0ece:
    param_3 = local_3c;
    local_40 = param_7;
    local_3c[0] = (undefined1 *)(param_10 & 0xffffffbf);
    FUN_004a0970(in_ECX[2] - (int)local_24,param_4,param_5,param_6);
    local_3c[0] = (undefined1 *)0x4a0f12;
    FUN_004c4d7a();
    return;
  }
LAB_004a0d17:
  pfVar6 = (float *)((int)param_3 * 0x1c + 0xc + *in_ECX);
  local_18 = (undefined1 *)*pfVar6;
  if (param_8 != (undefined1 *)(local_14 + -1)) {
    iVar2 = in_ECX[2];
    for (puVar8 = (undefined1 *)param_3; puVar4 = puVar8, (int)puVar8 < iVar2; puVar8 = puVar8 + 1)
    {
      param_9 = (float *)((pfVar6[2] + *pfVar6) - (float)local_18);
      if (local_1c < (float)param_9) {
        local_20 = puVar8;
        if ((int)puVar8 < iVar2) {
          pfVar6 = (float *)((int)puVar8 * 0x1c + 0xc + *in_ECX);
          goto LAB_004a0d92;
        }
        break;
      }
      pfVar6 = pfVar6 + 7;
    }
    goto LAB_004a0e07;
  }
  iVar2 = in_ECX[2];
  local_1c = param_6;
  goto LAB_004a0e5c;
  while( true ) {
    if ((*(char *)(pfVar6 + 3) != '\0') || (pfVar6[-2] == 6.30584e-44)) goto LAB_004a0e06;
    puVar4 = puVar4 + 1;
    pfVar6 = pfVar6 + 7;
    if (iVar2 <= (int)puVar4) break;
LAB_004a0d92:
    param_9 = (float *)(pfVar6[2] + *pfVar6);
    if (param_6 <= ((float)param_9 - (float)local_18) * (float)param_11) {
      local_3c[0] = (undefined1 *)0x7;
      param_9 = (float *)0x1;
      local_40 = 6.800799e-39;
      iVar2 = FUN_00440367();
      puVar4 = puVar8;
      if (1 < iVar2) {
        piVar7 = (int *)(*in_ECX + -0x18 + (int)puVar8 * 0x1c);
        goto LAB_004a0de8;
      }
      break;
    }
  }
LAB_004a0e07:
  puVar8 = puVar4;
  if (0 < (int)puVar4) {
    pcVar3 = (char *)((int)puVar4 * 0x1c + -4 + *in_ECX);
    do {
      if (*pcVar3 == '\0') break;
      puVar8 = puVar8 + -1;
      pcVar3 = pcVar3 + -0x1c;
    } while (0 < (int)puVar8);
  }
  if ((int)puVar4 < in_ECX[2]) {
    pcVar3 = (char *)((int)puVar4 * 0x1c + 0x18 + *in_ECX);
    do {
      if (*pcVar3 == '\0') break;
      puVar4 = puVar4 + 1;
      pcVar3 = pcVar3 + 0x1c;
    } while ((int)puVar4 < in_ECX[2]);
  }
  local_3c[0] = (undefined1 *)0x4a0e4f;
  FUN_0049feb8();
  local_40 = 6.800974e-39;
  local_3c[0] = puVar8;
  iVar2 = FUN_00439b5a();
LAB_004a0e5c:
  param_9 = &local_40;
  local_3c[0] = param_11;
  local_40 = (float)(param_10 & 0x47 | 0x20);
  puVar8 = (undefined1 *)&param_2;
  fVar9 = (float10)FUN_0049fa3d(puVar8);
  iVar5 = FUN_004a0753(param_3,iVar2 - (int)param_3,param_4,param_1,param_6,(float)fVar9,puVar8);
  local_3c[0] = (undefined1 *)0x4a0eb4;
  param_3 = (undefined1 **)(iVar2 - iVar5);
  fVar9 = (float10)FUN_0049fa3d();
  param_1 = (undefined1 *)(float)(fVar9 + (float10)(float)param_1);
  if ((in_ECX[2] <= (int)(iVar2 - iVar5)) ||
     (param_8 = (undefined1 *)((int)param_8 + 1), local_14 <= (int)param_8)) goto LAB_004a0ece;
  goto LAB_004a0d17;
LAB_004a0de8:
  if (((char)piVar7[5] == '\0') && (*piVar7 != 0x2d)) goto code_r0x004a0df3;
  puVar4 = local_20 + -(int)param_9;
LAB_004a0e06:
  puVar4 = puVar4 + 1;
  goto LAB_004a0e07;
code_r0x004a0df3:
  param_9 = (float *)((int)param_9 + 1);
  piVar7 = piVar7 + -7;
  if (iVar2 <= (int)param_9) goto LAB_004a0e07;
  goto LAB_004a0de8;
}

