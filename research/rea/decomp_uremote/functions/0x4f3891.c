// rea decompile_all
// name: FUN_004f3891
// address: 0x4f3891
// body: available
// range: 0x4f3891-0x4f3a4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f3891(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined1 *puStack_68;
  uint uStack_64;
  undefined1 **ppuStack_60;
  float fStack_5c;
  undefined1 local_4c [16];
  undefined1 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  float local_c;
  
  fStack_5c = 7.275326e-39;
  cVar2 = FUN_004f36c5();
  if ((cVar2 == '\0') || (((byte)*(undefined4 *)(in_EAX + 0x18) & 3) == 3)) goto LAB_004f3a1b;
  fStack_5c = 7.275364e-39;
  cVar2 = FUN_004c334c();
  if (cVar2 != '\0') goto LAB_004f3a1b;
  fStack_5c = 7.275386e-39;
  fVar5 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  local_c = (float)fVar5;
  fStack_5c = *(float *)(in_EAX + 0x14);
  uStack_64 = *(undefined4 *)(in_EAX + 0xc);
  ppuStack_60 = *(undefined1 ***)(in_EAX + 0x10);
  puStack_68 = *(undefined1 **)(in_EAX + 8);
  local_1c = (undefined1 *)&puStack_68;
  FUN_004bfa3c(local_c);
  ppuStack_60 = &local_3c;
  fStack_5c = local_c;
  uStack_64 = 0x4f3917;
  FUN_004f36e5();
  if (local_2c == local_3c) {
    local_10 = CONCAT31(local_10._1_3_,1);
    if (local_2c + local_24 == local_3c + local_34) goto LAB_004f3933;
  }
  else {
LAB_004f3933:
    local_10 = local_10 & 0xffffff00;
  }
  if (local_28 == local_38) {
    local_14 = CONCAT31(local_14._1_3_,1);
    if (local_20 + local_28 == local_30 + local_38) goto LAB_004f3953;
  }
  else {
LAB_004f3953:
    local_14 = local_14 & 0xffffff00;
  }
  if (local_2c == local_3c) {
LAB_004f396d:
    local_18 = local_18 & 0xffffff00;
  }
  else {
    local_18 = CONCAT31(local_18._1_3_,1);
    if (local_2c + local_24 != local_3c + local_34) goto LAB_004f396d;
  }
  if (local_28 == local_38) {
LAB_004f398a:
    local_1c = (undefined1 *)((uint)local_1c & 0xffffff00);
  }
  else {
    local_1c = (undefined1 *)CONCAT31(local_1c._1_3_,1);
    if (local_20 + local_28 != local_30 + local_38) goto LAB_004f398a;
  }
  fStack_5c = 7.275658e-39;
  FUN_004c4e62();
  fStack_5c = (float)local_10;
  ppuStack_60 = (undefined1 **)local_14;
  uStack_64 = local_18;
  iVar1 = **(int **)(param_1 + 0x1c);
  puStack_68 = local_1c;
  uVar3 = FUN_004c54d5(local_4c);
  (**(code **)(iVar1 + 4))(&local_2c,&local_3c,uVar3);
  local_1c = (undefined1 *)&puStack_68;
  puStack_68 = local_2c;
  uStack_64 = local_28;
  ppuStack_60 = (undefined1 **)local_24;
  fStack_5c = (float)local_20;
  piVar4 = (int *)FUN_004bfad2(local_c);
  local_2c = (undefined1 *)*piVar4;
  local_28 = piVar4[1];
  local_24 = piVar4[2];
  iVar1 = piVar4[3];
  *(int *)(in_EAX + 0x10) = local_24;
  *(undefined1 **)(in_EAX + 8) = local_2c;
  *(int *)(in_EAX + 0xc) = local_28;
  *(int *)(in_EAX + 0x14) = iVar1;
LAB_004f3a1b:
  if (((*(uint *)(in_EAX + 0x18) & 0x40) == 0) ||
     (piVar4 = *(int **)(param_1 + 4), (*(byte *)(piVar4 + 0x1a) & 2) != 0)) {
    if (-1 < (char)*(uint *)(in_EAX + 0x18)) {
      return 0;
    }
    piVar4 = *(int **)(param_1 + 4);
    if ((*(byte *)(piVar4 + 0x1a) & 2) == 0) {
      return 0;
    }
    fStack_5c = 0.0;
  }
  else {
    fStack_5c = 1.4013e-45;
  }
  ppuStack_60 = (undefined1 **)0x4f3a46;
  (**(code **)(*piVar4 + 0x28))();
  return 0;
}

