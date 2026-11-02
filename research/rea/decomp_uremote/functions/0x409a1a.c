// rea decompile_all
// name: FUN_00409a1a
// address: 0x409a1a
// body: available
// range: 0x409a1a-0x409dc9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00409a1a(undefined4 param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *local_54;
  int local_50;
  int *local_4c;
  undefined1 local_48 [8];
  int *local_40;
  undefined1 local_28 [8];
  int local_20;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  local_50 = iVar3;
  _memset(param_4,0,0xb9c);
  _memset(local_28,0,0x20);
  *param_4 = param_2;
  param_4[1] = iVar3;
  uVar1 = FUN_004d021d();
  piVar2 = (int *)FUN_00411560(param_2,param_4);
  if (piVar2 != (int *)0x0) goto LAB_00409db8;
  if ((((char)param_4[4] != '\x01') || (*(byte *)((int)param_4 + 0x12) < 4)) ||
     (4 < *(byte *)((int)param_4 + 0x13))) {
    piVar2 = (int *)0x2;
    goto LAB_00409db8;
  }
  piVar2 = (int *)FUN_00411095(*(byte *)((int)param_4 + 0x12) - 4);
  if ((piVar2 != (int *)0x0) || (piVar2 = (int *)FUN_00408b33(0), piVar2 != (int *)0x0))
  goto LAB_00409db8;
  local_54 = param_4 + 0x12e;
  piVar2 = (int *)FUN_00408b33(0);
  if ((piVar2 != (int *)0x0) || (piVar2 = (int *)FUN_00408b33(1), piVar2 != (int *)0x0))
  goto LAB_00409db8;
  local_4c = param_4 + 0x15;
  piVar2 = (int *)FUN_00408b33(1);
  if ((piVar2 != (int *)0x0) ||
     (piVar2 = (int *)FUN_00408d97(param_4 + 0x149,param_4 + 0x14a), piVar2 != (int *)0x0))
  goto LAB_00409db8;
  param_4[0x148] = local_20;
  param_4[2] = param_4[7];
  if (param_4[7] <= param_3) {
    piVar2 = (int *)0x6;
  }
  if ((((param_3 < 0) ||
       (piVar2 = (int *)FUN_00409811(param_4 + 0x14b,local_54,param_3,param_2,uVar1,param_1),
       piVar2 != (int *)0x0)) || (piVar2 = (int *)FUN_0041106d(), piVar2 != (int *)0x0)) ||
     (piVar2 = (int *)FUN_00408b33(0), piVar2 != (int *)0x0)) goto LAB_00409db8;
  if (param_4[0x16c] == 0xffff) {
    param_4[0x1da] = 0;
  }
  else {
    piVar2 = (int *)FUN_0041106d();
    if ((piVar2 != (int *)0x0) ||
       (piVar2 = (int *)FUN_00408b33(0), local_54 = piVar2, piVar2 != (int *)0x0))
    goto LAB_00409db8;
    if (local_40 < (int *)0x101) {
      param_4[0x1da] = (int)local_40;
      iVar3 = FUN_00411976(0x23c,0,&local_54);
      piVar2 = local_54;
      if (local_54 == (int *)0x0) {
        if (local_40 != (int *)0x0) {
          piVar2 = param_4 + 0x1db;
          piVar4 = local_40;
          do {
            *piVar2 = iVar3;
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 0x23c;
            piVar4 = (int *)((int)piVar4 + -1);
          } while (piVar4 != (int *)0x0);
        }
        if (local_40 != (int *)0x0) {
          piVar4 = param_4 + 0x1db;
          do {
            piVar2 = (int *)FUN_00409811(*piVar4,local_48,local_54,param_2,uVar1,param_1);
            if (piVar2 != (int *)0x0) goto LAB_00409cd4;
            local_54 = (int *)((int)local_54 + 1);
            piVar4 = piVar4 + 1;
          } while (local_54 < local_40);
        }
        piVar2 = (int *)FUN_00409108(param_4[0x128]);
      }
    }
LAB_00409cd4:
    FUN_00408c29();
    if (piVar2 != (int *)0x0) goto LAB_00409db8;
  }
  if (param_4[0x167] == 0) {
    piVar2 = (int *)0x3;
    goto LAB_00409db8;
  }
  param_4[3] = param_4[0x128];
  piVar2 = (int *)FUN_00408d97(param_4 + 0x147,0);
  if (piVar2 != (int *)0x0) goto LAB_00409db8;
  if (param_4[3] != 0) {
    if (param_4[0x16c] == 0xffff) {
LAB_00409d4a:
      local_54 = (int *)((uint)local_54 & 0xffffff00);
    }
    else {
      local_54 = (int *)CONCAT31(local_54._1_3_,1);
      if (param_5 == '\0') goto LAB_00409d4a;
    }
    piVar2 = (int *)FUN_004092c9(param_4 + 0x120,param_4[3],uVar1,local_54);
    if ((piVar2 != (int *)0x0) ||
       ((param_4[0x16c] == 0xffff &&
        (piVar2 = (int *)FUN_00409558(param_4 + 0x120,param_4[3],param_2,uVar1),
        piVar2 != (int *)0x0)))) goto LAB_00409db8;
  }
  iVar3 = FUN_00409035(param_3);
  param_4[0x146] = iVar3;
LAB_00409db8:
  FUN_00408c29();
  return piVar2;
}

