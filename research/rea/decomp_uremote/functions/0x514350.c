// rea decompile_all
// name: FUN_00514350
// address: 0x514350
// body: available
// range: 0x514350-0x514785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00514350(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  char local_170 [8];
  ushort local_168;
  undefined2 local_166;
  ushort local_164;
  ushort local_162;
  ushort local_160;
  short local_15e;
  uint local_70;
  int local_6c;
  char local_4d;
  short local_4c [14];
  int local_30;
  int local_2c;
  ushort local_28;
  undefined2 local_24;
  undefined1 local_20 [7];
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cf29d;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = 0;
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_14 = uVar3;
  do {
    if (1 < local_30) {
LAB_0051475f:
      FUN_0052ebf0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_0054ef00(uVar3);
    local_8 = 0;
    if (local_30 == 0) {
      FUN_0054eff0();
    }
    else {
      FUN_0054f090();
    }
    FUN_0054ef00();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0054f020(0,1);
    local_4c[0] = -0x1d70;
    local_4d = '\0';
    local_6c = 0;
    while ((local_6c < 0x14 && (local_4d = FUN_0054f100(local_4c[0]), local_4d != '\x01'))) {
      local_4c[0] = local_4c[0] + 0x1d;
      local_6c = local_6c + 1;
    }
    if (local_4d != '\0') {
      _memcpy(local_20,"VNMSRCH",7);
      local_19 = 1;
      local_18 = (undefined1)local_4c[0];
      local_17 = (undefined1)((ushort)local_4c[0] >> 8);
      local_16 = 2;
      local_15 = 0;
      local_174 = FUN_0052e6e0();
      for (local_178 = 0; local_178 < 4; local_178 = local_178 + 1) {
        FUN_0054f190(local_20,0xc,*(undefined2 *)(&DAT_009514fc + local_178 * 4));
        Sleep(10);
      }
      local_70 = 0;
      while (iVar4 = FUN_0052e6e0(), (uint)(iVar4 - local_174) < 500) {
        local_70 = 0;
        local_17c = FUN_0054f230(local_170,0x100,&local_70,&local_180,local_4c);
        if (local_17c == 0) {
          if ((0x11 < local_70) && (iVar4 = _strncmp(local_170,"VNMINFO",7), iVar4 == 0)) {
            sVar2 = local_15e;
            if (local_70 < 0x12) {
              sVar2 = 2;
            }
            if ((sVar2 == 2) && ((local_162 == 0 || (local_160 < local_162)))) {
              if (*(int *)(*(int *)(in_ECX + 4) + 0x11c) == 2) {
                if ((local_164 < 0x9001) || (local_168 <= local_28)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
              }
              else {
                bVar1 = local_28 < local_168;
              }
              if (bVar1) {
                local_2c = local_180;
                local_24 = local_166;
                local_28 = local_168;
              }
            }
          }
          Sleep(2);
        }
        *(ushort *)(in_ECX + 0x42) = local_28;
        *(undefined2 *)(in_ECX + 0x40) = local_24;
        *(int *)(in_ECX + 0x3c) = local_2c;
      }
    }
    if (local_2c != 0) {
      local_8 = (uint)local_8._1_3_ << 8;
      FID_conflict__ctype<char>();
      local_8 = 0xffffffff;
      FID_conflict__ctype<char>();
      goto LAB_0051475f;
    }
    local_8 = (uint)local_8._1_3_ << 8;
    FID_conflict__ctype<char>();
    local_8 = 0xffffffff;
    FID_conflict__ctype<char>();
    local_30 = local_30 + 1;
  } while( true );
}

