// rea decompile_all
// name: FUN_004b88c0
// address: 0x4b88c0
// body: available
// range: 0x4b88c0-0x4b8a9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b88c0(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  char *pcVar8;
  int *piVar9;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00704277;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[2] = &DAT_00bfe12c;
  in_ECX[3] = &DAT_00bfe12c;
  local_8 = 1;
  pcVar8 = 
  "attribute vec2 position;attribute vec4 colour;uniform vec4 screenBounds;varying  vec4 frontColour;varying  vec2 pixelPos;void main(){frontColour = colour;vec2 adjustedPos = position - screenBounds.xy;pixelPos = adjustedPos;vec2 scaledPos = adjustedPos / screenBounds.zw;gl_Position = vec4 (scaledPos.x - 1.0, 1.0 - scaledPos.y, 0, 1.0);}"
  ;
  if (param_3 != (char *)0x0) {
    pcVar8 = param_3;
  }
  FUN_0045c990(pcVar8,uVar6);
  uVar7 = FUN_006f48d0();
  local_8 = 3;
  bVar3 = false;
  bVar2 = false;
  cVar5 = FUN_006f4410(uVar7,0x8b31);
  if (cVar5 != '\0') {
    FUN_0045c990(param_2,uVar6);
    uVar7 = FUN_006f48b0();
    local_8 = 5;
    bVar3 = true;
    bVar2 = true;
    cVar5 = FUN_006f4410(uVar7,0x8b30);
    if (cVar5 != '\0') {
      cVar5 = FUN_006f42b0();
      bVar4 = true;
      if (cVar5 != '\0') goto LAB_004b89b2;
    }
  }
  bVar4 = false;
LAB_004b89b2:
  if (bVar2) {
    piVar9 = (int *)(local_1c + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  if ((bVar3) && (piVar9 = (int *)(param_3 + -8), piVar9 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = (int *)(local_20 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  piVar9 = (int *)(local_18 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar9);
    }
  }
  if (!bVar4) {
    piVar9 = (int *)(in_ECX[2] + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = in_ECX[3];
    in_ECX[3] = in_ECX[2];
    UNLOCK();
    piVar9 = (int *)(iVar1 + -8);
    if (piVar9 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar9);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

