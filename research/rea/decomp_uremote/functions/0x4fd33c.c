// rea decompile_all
// name: FUN_004fd33c
// address: 0x4fd33c
// body: available
// range: 0x4fd33c-0x4fd4e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004fd33c(int param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_ESI;
  int local_10c [12];
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    local_d0 = unaff_ESI[1];
    local_d8 = *unaff_ESI;
    local_c8 = unaff_ESI[2];
    local_c0 = unaff_ESI[3];
    local_b8 = unaff_ESI[4];
    local_b0 = unaff_ESI[5];
    local_a8 = unaff_ESI[6];
    local_a0 = unaff_ESI[7];
    local_98 = unaff_ESI[8];
    local_10c[0xb] = local_d8 + local_d0 + local_c8;
    local_90 = unaff_ESI[9];
    local_10c[0] = 0x2001;
    local_10c[1] = 1;
    local_10c[2] = 0x2010;
    local_10c[3] = 1;
    local_10c[4] = 0x2011;
    local_10c[5] = 1;
    local_10c[6] = 0x2013;
    local_10c[7] = 0x202b;
    local_10c[8] = 0x2003;
    local_10c[9] = 0x2027;
    local_10c[10] = 0x2014;
    local_dc = 0x2015;
    local_d4 = 0x2017;
    local_cc = 0x2019;
    local_c4 = 0x201b;
    local_bc = 0x2022;
    local_b4 = 0x2023;
    local_ac = 0x201e;
    local_a4 = 0x201f;
    local_9c = 0x2020;
    local_94 = 0x2021;
    iVar2 = 0x20;
    if ((char)unaff_ESI[10] != '\0') {
      cVar1 = FUN_004fc686();
      if (cVar1 != '\0') {
        local_80 = (uint)*(byte *)(unaff_ESI + 10);
        local_8c = 0x2041;
        local_88 = 1;
        local_84 = 0x2042;
        iVar2 = 0x24;
      }
    }
    local_10c[iVar2] = 0;
    local_c = 0;
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xc),local_10c,0,1,&local_8,&local_c);
  }
  return local_8;
}

