// rea decompile_all
// name: FUN_004d356a
// address: 0x4d356a
// body: available
// range: 0x4d356a-0x4d36fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d356a(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                 float *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  float local_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 *puStack_34;
  uint local_30;
  float local_18;
  float local_c;
  float local_8;
  
  iVar1 = *(int *)((int)param_2 + 0x18);
  iVar2 = *(int *)((int)param_2 + 0x1c);
  local_30 = 0x4d3589;
  cVar6 = FUN_004c3153();
  if (cVar6 == '\0') {
    fVar5 = 0.4;
  }
  else if (((char)param_5 != '\0') || (fVar5 = _DAT_0095768c, (char)param_4 != '\0')) {
    fVar5 = 1.2;
  }
  fVar4 = fVar5 * 0.5;
  local_c = fVar4;
  if ((*(byte *)((int)param_2 + 0xb8) & 1) != 0) {
    local_c = 0.1;
  }
  uVar3 = *(uint *)((int)param_2 + 0xb8);
  local_18 = fVar4;
  if ((uVar3 >> 1 & 1) != 0) {
    local_18 = 0.1;
  }
  local_8 = fVar4;
  if ((uVar3 >> 2 & 1) != 0) {
    local_8 = 0.1;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    fVar4 = 0.1;
  }
  local_30 = 0x4d3624;
  cVar6 = FUN_004c3153();
  if (cVar6 == '\0') {
    local_30 = 0x3f000000;
  }
  else {
    local_30 = 0x3f800000;
  }
  puStack_34 = &param_5;
  uStack_38 = (uint)param_5;
  uStack_3c = param_4;
  local_40 = 1;
  local_44 = param_2;
  local_40 = FUN_004c30fb();
  local_40 = local_40 & 0xff;
  param_5 = &local_44;
  FUN_004d076d();
  FUN_004d3245();
  uStack_38 = 0x4d366f;
  FUN_00476237();
  uVar3 = *(uint *)((int)param_2 + 0xb8);
  local_30 = (uint)((byte)(uVar3 >> 3) & 1);
  puStack_34 = (undefined4 *)(uint)((byte)(uVar3 >> 2) & 1);
  uStack_38 = (uint)((byte)(uVar3 >> 1) & 1);
  uStack_3c = (uint)(*(byte *)((int)param_2 + 0xb8) & 1);
  local_40 = 0xbf800000;
  local_44 = fVar5;
  FUN_004dc42b(local_c,local_8,((float)iVar1 - local_c) - local_18,((float)iVar2 - local_8) - fVar4,
               &param_5);
  return;
}

